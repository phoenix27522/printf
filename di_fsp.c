#include "main.h"
/**
 * rev_string - converts an int to a reversed string
 * @number: number to reverse
 *
 * Return: string
 */

char *rev_string(int number)
{
	char *s;
	int i = 0, negative = 0;

	s = malloc(12);
	if (!s)
		return (NULL);
	if (number == 0)
	{
		*s = '0';
		*(s + 1) = '\0';
		return (s);
	}
	if (number < 0)
	{
		negative = 1;
		number = -number;
	}
	while (number != 0)
	{
		s[i++] = '0' + number % 10;
		number /= 10;
	}
	if (negative)
		s[i++] = '-';
	s[i] = '\0';
	reverse_string(s);
	return (s);
}

/**
 * fsp_int - prints an integer
 * @arg: the integer argument
 * Description - function prints a integer argument
 * Return: int
 */
int fsp_int(va_list args)
{
	int number, result;
	char *buffer;

	number = va_arg(args, int);
	if (!number)
		return (-1);
	buffer = rev_string(number);
	if (!buffer)
		return (-1);
	result = write(1, buffer, _strlen(buffer));
	free(buffer);
	return (result);
}
