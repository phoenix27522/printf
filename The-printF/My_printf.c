/**
 * _printf - Printf function
 * @format: format.
 * Return: Printed chars.
 */
int _printf(const char *format, ...)
{
	int len = 0, a = 0, func;
	char buffer[BUFF_SIZE];

	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (format && format[a])
	{
		if (format[a] == '%')
		{
			a++;
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
				str_length += func;
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
