#include "main.h"

/**
 * fsp_char - prints a char
 * @args: the character argument
 * Description - function prints a character argument
 * Return: 1
 */
int fsp_char(va_list args, int len)
{
	int char_fsp;
	(void)len;

	char_fsp = va_arg(args, int);

	return (write(1, &char_fsp, 1));
}

/**
 * fsp_str - prints a string
 * @args: string argument
 * Description - this function print a string argument
 * Return: int
 */
int fsp_str(va_list args, int len)
{
	 char *s;
	(void)len;

	s = va_arg(args, char *);

	if (!s)
		s = "(null)";
	return (write(1, s, _strlen(s)));
}

/**
 * fsp_psnt - prints %
 * @args: spressed by void
 * Return: 1
 */
int fsp_psnt(va_list args, int len)
{
	(void)args;
	(void)len;

	write(1, "%", 1);
	return (1);
}
