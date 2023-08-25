#include "main.h"
/**
  * fsp_String - print the str with ASCII == \x.
  * @args: arguments.
  * @len: length.
  * Return: length of characters printed.
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

/**
 * fsp_addr - Print address in hexadecimal format.
 * @args: arguments.
 * @len: string length.
 * Return: length.
 */
int fsp_addr(va_list args, int len)
{
	void *address = va_arg(args, void *);

	if (address != 0)
		len += _puts("0x");
	len += custom_hexa((unsigned long)address);

	return (len);
}

/**
  * str_rev_func - Print a reversed string.
  * @chars: List of character.
  * @str_length: Length of string.
  * Return: length of the reversed string
  */
int fsp_rev(va_list args, int len)
{
	int i;
	char *str, *ret;

	str = va_arg(args, char *);
	len = _strlen(str);
	ret = malloc(len + 1);
	if (!ret)
		_puts("(null)");

	for (i = 0; i < len; i++)
		_putchar(ret[i] = str[len - i - 1]);
	_putchar(ret[i] = '\0');

	return (len);
}