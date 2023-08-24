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
	int i = 0, remainder;
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
			remainder = num % 16;
			if (remainder < 10)
				buffer[i++] = '0' + (num % 16);
			else
				buffer[i++] = 'a' + (remainder - 10);
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

/**
 * fsp_hex - print hexadecimal
 * @args: argument
 * @len: length
 * Return: Number of written chars.
 */
int fsp_heXa(va_list args, int len)
{
	int i = 0, remainder, output_index = 0;
	char buffer[BUFF_SIZE];
	char output_buffer[BUFF_SIZE];

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
			remainder = num % 16;
			if (remainder < 10)
				buffer[i++] = '0' + remainder;
			else
				buffer[i++] = 'A' + (remainder - 10);
			num /= 16;
		}
	}
	output_index = 0;

	/* Print the characters in reverse order to get the correct number*/
	while (i > 0)
	{
		output_buffer[output_index++] = buffer[--i];
	}
	write(1, output_buffer, output_index);
	return (len);
}
