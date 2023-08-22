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
	int i;

	va_start(args, format);

	if (format == NULL)
		return (-1);

	if (!format || !format[1])
		return (-1);

	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);


	i = print_fsp(format, args);
	va_end(args);
	return (i);
}
