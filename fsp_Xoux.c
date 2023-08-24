#include "main.h"
/**
 * fsp_unsign - Writes an unsigned number
 * @len: length
 * @args: argument
 * Return: Number of written chars.
 */
int fsp_unsign(va_list args, int len)
{
	int i = 0;
	char buffer[20];

	unsigned int num = va_arg(args, unsigned int);

	len = len + len_num(num, 10) + 1;

	if (num == 0)
	{
		buffer[i++] = '0';
	}
	else
	{
		while (num > 0)
		{
			buffer[i++] = '0' + (num % 10);
			num /= 10;
		}
	}

	/* Print the characters in reverse order to get the correct number*/
	while (i > 0)
	{
		_putchar(buffer[--i]);
	}
	return (len);
}

/**
 * fsp_octal - print octal
 * @len: length
 * @args: argument
 * Return: Number of written chars.
 */
int fsp_octal(va_list args, int len)
{
	int i = 0;
	char buffer[20];

	unsigned int num = va_arg(args, unsigned int);

	len = len + len_num(num, 8) + 1;
	if (num == 0)
	{
		buffer[i++] = '0';
	}
	else
	{
		while (num > 0)
		{
			buffer[i++] = '0' + (num % 8);
			num /= 8;
		}
	}

	/* Print the characters in reverse order to get the correct number*/
	while (i > 0)
	{
		_putchar(buffer[--i]);
	}
	return (len);
}

/**
 * fsp_hex - print hexadecimal
 * @args: argument
 * @len: length
 * Return: Number of written chars.
 */
int fsp_hexa(va_list args, int len)
{
	int i = 0;
	char buffer[20];

	unsigned int num = va_arg(args, unsigned int);

	len = len + len_num(num, 16) + 1;
	if (num == 0)
	{
		buffer[i++] = '0';
	}
	else
	{
		while (num > 0)
		{
			buffer[i++] = '0' + (num % 16);
			num /= 16;
		}
	}

	/* Print the characters in reverse order to get the correct number*/
	while (i > 0)
	{
		_putchar(buffer[--i]);
	}
	return (len);
}
