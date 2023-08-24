#include "main.h"
/**
  *non_print_str - print the str with ASCII == \x.
  *@n: arguments.
  *@len: length.
  *Return: length of characters printed.
  */
int fsp_String(va_list args, int len)
{
	int i;
	char *str = va_arg(args, char *);

	if (str == NULL)
	{
		len += _printf("(null)");
	}
	else
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			if ((str[i] < 32 || str[i] >= 127) && str[i] >= 0)
			{
				if (str[i] < 15)
					len += _printf("\\x0%X", str[i]);
				else
					len += _printf("\\x%X", str[i]);
			}
			else
				len += _putchar(str[i]);
		}
	}
	return (len);
}
