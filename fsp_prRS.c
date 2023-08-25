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
  * fsp_rev - Print a reversed string.
  * @args: List of character.
  * @len: Length of string.
  * Return: length of the reversed string
  */
int fsp_rev(va_list args, int len)
{
	char *str = va_arg(args, char *);
	int length = 0;
	int i;

	if (!str)
		str = ("NULL");

	while (str[length] != '\0')
		length++;

	for (i = length - 1; i >= 0; i--)
		len = len + _putchar(str[i]);

	return (len);

}

/**
  * fsp_rot13 - prints the rot13'ed string.
  * @args: argument.
  * @len: length.
  * Return: length.
  */
int fsp_rot13(va_list args, int len)
{
	char new;
	char *str;
	unsigned int i, j;
	char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";


	str = va_arg(args, char *);

	if (str == NULL)
		return (-1);
	for (i = 0; str[i]; i++)
	{
		for (j = 0; in[j]; j++)
		{
			if (in[j] == str[i])
			{
				new = out[j];
				write(1, &new, 1);
				len++;
				break;
			}
		}
		if (!in[j])
		{
			new = str[i];
			write(1, &new, 1);
			len++;
		}
	}
	return (len);
}

