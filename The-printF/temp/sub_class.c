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
/**
  * digits_func - Print digits.
  * @num: digits.
  * @base: digits to convert the digits to.
  * @digits: The digits found.
  * Return: length.
  */

int print_digit(unsigned long num, unsigned int base, const char *digits)
{
	if (num >= base)
		print_digit((num / base), base, digits);
	_putchar(digits[num % base]);
	return (len_num(num, base) + 1);
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
