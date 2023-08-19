#include "main.h"
/**
 * _printf - Printf function
 * @format: format.
 * Return: Printed chars.
 */
int _printf(const char *format, ...)
{
	int i, indx;
	char specifier;
	int num_of_chars = 0;
	int printed_char;

	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			indx = i;
			i++;/* goes beyond '%' */
			while (format[i] != '\0' && !is_format_specifier(format[i]))
			{
				i++;
			}
			if (format[i] == '\0')
			{
				break;/*format specifier incomplete, break the loop*/
			}
			specifier = format[i];
			printed_char = _putchar(specifier, args, indx);

			num_of_chars += printed_char;
		}
		else
		{
			_putchar(format[i], args, -1);/* prints regular chars */
			num_of_chars++;
		}
	}
	va_end(args);

	return (num_of_chars);
}

