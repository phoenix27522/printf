#include "main.h"
/**
 * _printf - Printf function
 * @format: format.
 * Return: Printed chars.
 */
int _printf(const char *format, ...)
{
	int i, total_chars_written = 0, specifier_found = 0;
	int buff_indx= 0;
	char buffer[BUFF_SIZE];

	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			buffer[buff_indx++] = format[i];
			if (buff_indx == BUFF_SIZE)
				prt_buffer(buffer, &buff_indx);
			total_chars_written++;
		}
		else 
		{
			prt_buffer(buffer, &buff_indx);
			specifier_found = print_fsp(format, args, &i);
			if (specifier_found == -1)
			{
				return (-1);
			}
			total_chars_written += specifier_found;
		}
	}
	prt_buffer(buffer, &buff_indx);
	va_end(args);
	return (total_chars_written);
}
