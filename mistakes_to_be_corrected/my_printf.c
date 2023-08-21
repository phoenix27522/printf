#include "main.h"
/**i
 * _printf - Printf function
 * @format: format.
 * Return: Printed chars.
 */
int _printf(const char *format, ...)
{
	int i, total_chars_written = 0, printed_ch = 0;
	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			printed_ch += print_fsp(&format[i], args, &i);
			if (printed_ch == -1)
			{
				va_end(args);
				return(-1);
			}
			total_chars_written += printed_ch;
		}
		else
		{
			write(1, &format[i], 1);
			total_chars_written++;
		}
	}

	va_end(args);
	return (total_chars_written);
}	
