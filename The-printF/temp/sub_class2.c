#include "main.h"
/**
 * custom_hexa - print hexadecimal
 * @num: number
 * Return: Number of written chars.
 */
int custom_hexa(unsigned long num)
{
	int i = 0, remainder, len = 0;
	char buffer[BUFF_SIZE];

	if (num == 0)
	{
		len += _puts("(nil)");
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
		len++;
	}
	return (len);
}
/**
 * _puts - prints a string to stdout
 * @str: pointer to the string to print
 * Return: number of chars written
 */
int _puts(char *str)
{
	register int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}
