#include "main.h"
/**
 * fsp_hex - print hexadecimal
 * @args: argument
 * @len: length
 * Return: Number of written chars.
 */
int custom_hexa(unsigned long num)
{
	int i = 0, remainder, len;
	char buffer[BUFF_SIZE];

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

	len = 0;

	/* Print the characters in reverse order to get the correct number*/
	while (i > 0)
	{
		_putchar(buffer[--i]);
		len++;
	}
	return (len);
}
