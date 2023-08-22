#include "main.h"
/**
 * _printf - prints characters and strings
 * @format: the operators and string to be printed
 * Description - this function prints a string and chars
 * Return: the string length or -1
 */
int _printf(const char *format, ...)
{
    va_list args;
    int result = 0;
    int format_length = strlen(format);
    int i;

    if (format == NULL || format_length == 0)
        return (-1);

    va_start(args, format);

    if (format_length == 1 && format[0] == '%')
    {
        va_end(args);
        return (-1);
    }

    if (format[format_length - 1] == '%')
    {
        va_end(args);
        return (-1);
    }

    i = 0;
    while (format[i] != '\0')
    {
        if (format[i] == '%')
        {
            i++;
            if (format[i] == '%') 
            {
                putchar(format[i]);
                i++;
            }
            continue;
        }

        putchar(format[i]);
        i++;
    }

    result = print_fsp(format, args);
    va_end(args);
    return result;
}
