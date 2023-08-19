#include "main.h"
/**
 * spf_char - print char
 * @args: List a of arguments
 * Return: zero
 */
int spf_char(va_list args)
{
	char c_spf;

	c_spf = va_arg(args, int);

	_putchar(c_spf);

	return (0);
}

/**
 * spf_str - prints string
 * @args: list of arguments
 * Return: zero
 */
int spf_str(va_list args)
{
	int len = 0, i;
	char *str;

	str = va_arg(args, char *);

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		len++;
	}

	return(len);
}

/**
 * spf_str - prints string
 * @args: list of arguments
 * Return: zero
 */
int spf_psnt(va_list args)
{
	_putchar('%');
	return (1);
}
