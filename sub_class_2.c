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

/**
  * digits_func - Print digits.
  * @num: digits.
  * @targ: digits to convert the digits to.
  * @digits: The digits found.
  * Return: length.
  */

int digits_func(unsigned long num, unsigned int targ, const char *digits)
{
	if (num >= targ)
		digits_func((num / targ), targ, digits);
	_putchar(digits[num % targ]);
	return (len_func(num, targ) + 1);
}

/**
  *len_func - calculate the length of a string.
  *@num: digits;
  *@targ: base of digits.
  *Return: length (i).
  */
unsigned int len_func(unsigned int num, int targ)
{
	unsigned int i;

	i = 0;
	while (num > 0)
	{
		num = num / targ;
		if (num == 0)
			break;
		i++;
	}
	return (i);
}
