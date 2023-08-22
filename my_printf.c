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
	int num_char = 0;

	/*va_start(args, format);*/

	if (format[0] == '\0')
	{
		return (0);
	}

	if ((format[0] == '%' && format[1] == '\0')
			|| (format[0] == '%' && format[1] == ' ' && format[2] == '\0'))
	{
		return (-1);
	}
	if (format != NULL)
	{
		va_start(args, format);
		num_char = print_fsp(format, args);
		va_end(args);
	}
	else
		return (-1);

	return (num_char);
}
