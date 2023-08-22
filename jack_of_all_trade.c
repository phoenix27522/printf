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
