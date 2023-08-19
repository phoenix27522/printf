#include "main.h"
/**
 * _printf - Prints anything
 * @format: format specifiers
 * Return: an output according to a format
 */
int _printf(const char *format, ...)
{
	va_list args;
	char *str;
	int i;
	int num_char = 0;/* value to check how many characters were printed by the _printf function*/

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'c':
					_putchar(va_arg(args, int));/* int is the ASCII value of the character to be printed */
					i++;/* with out this it prints Character:[Hc] not this Character:[H]*/
					num_char++;
					break;
				case 's':
					str = va_arg(args, char *);
					for ( ; *str != '\0'; str++)
					{
					       _putchar(*str);
					       num_char++;
					}
					i++; /*with out this the string prints String:[I am a string !s] not String:[I am a string !]*/
					break;
				case '%': /* We need to handle % specifier too */
					_putchar('%');
					i++;
					num_char++;
					break;
				default:
					break;
			}
		}
		else
		{
			_putchar(format[i]); 
			num_char++;
		}
	}
	va_end(args);
	return (num_char);
}
