#include "main.h"
/**
 * _printf - my own printf function.
 * @format: format.
 * Return: characters to print.
 */
int _printf(const char *format, ...)
{
	va_list list;
	int a, str_length;
	 bool flag_plus, flag_space, flag_hash;
	int (*func)(va_list, int);

	va_start(list, format);
	if (format == NULL)
		return (-1);
	a = 0;
	str_length = 0;
	while (format && format[a])
	{
		if (format[a] == '%')
		{
			a++;

			flag_plus = false;
			flag_space = false;
			flag_hash = false;

			handle_flags(&format[a], &flag_plus, &flag_space, &flag_hash);

			if (format[a] == '%')
			{
				str_length = str_length + _putchar(format[a]);
				a++;
				continue;
			}
			if (format[a] == '\0')
				return (-1);
			func = print_fsp(format[a]);
			if (func != NULL)
				str_length = func(list, str_length);
			else
			{
				str_length = str_length + _putchar(format[a - 1]);
				str_length = str_length + _putchar(format[a]);
			}
			a++;
		}
		else
		{
			str_length = str_length + _putchar(format[a]);
			a++;
		}
	}
	va_end(list);
	return (str_length);
}
