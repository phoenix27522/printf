#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
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
	return (len_num(num, targ) + 1);
}

/**
 * _strlen - prints the length of the string
 * @s: character
 * Return: it return length
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}

/**
  *len_num - calculate the length of a string.
  *@num: digits;
  *@base: base of digits.
  *Return: length (i).
  */
unsigned int len_num(unsigned int num, int base)
{
	unsigned int i;

	i = 0;
	while (num > 0)
	{
		num = num / base;
		if (num == 0)
			break;
		i++;
	}
	return (i);
}
