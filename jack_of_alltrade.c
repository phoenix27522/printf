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
 * cnv_size - Casts a number to the specified size
 * @num: Number to be casted.
 * @size: Number indicating the type to be casted.
 *
 * Return: Casted value of num
 */
long int cnv_size(long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((short)num);

	return ((int)num);
}

/**
 * reverse_string - reverses string
 * @s: string to reverse
 *
 * Return: nothing
 */

void reverse_string(char *s)
{
	int start, end;
	char temp;

	end = _strlen(s) - 1;
	for (start = 0; start < end; start++, end--)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
	}
}

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(const char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}
