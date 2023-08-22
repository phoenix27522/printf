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
	int i, j;
	int last_char;

	va_start(args, format);

	if (!format || !format[1])
		return (-1);

	last_char = format[strlen(format) - 1];
	if (last_char == '%')
		return (-1);

	for (j = 0; format[j] != '\0'; j++)
	{
		if (format[j] == '%' && format[j + 1] == ' ' && format[j + 2] == '\0')
			return (-1);
	}

	i = print_fsp(format, args);
	va_end(args);
	return (i);
}
