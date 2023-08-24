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
#include "main.h"
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
void reverse(char *str)
{
	int length, i;
	length = _strlen(str);

	for (i = length; i >= 0; i--)
	{
		_putchar(str[i]);
	}
}
