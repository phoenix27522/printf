#include "main.h"

/**
 * fsp_char - prints a char
 * @args: the character argument
 * Description - function prints a character argument
 * Return: 1
 */
int fsp_char(va_list args)
{
	int char_fsp = va_arg(args, int);

	write(1, &char_fsp, 1);

	if (char_fsp == '\0')
		return (0);
	return (1);
}

/**
 * fsp_str - prints a string
 * @args: string argument
 * Description - this function print a string argument
 * Return: int
 */
int fsp_str(va_list args)
{
	int len = 0;
	char *str_fsp = va_arg(args, char *);

	if (str_fsp == NULL)
	{
		str_fsp = "(null)";
	}
	while (*str_fsp != '\0')
	{
		write(1, str_fsp, 1);
		str_fsp++;
		len++;
	}
	len++;/*account for the null-terminator*/
	return (len);
}

/**
 * fsp_psnt - prints %
 * @args: spressed by void
 * Return: 1
 */
int fsp_psnt(va_list args)
{
	(void)args;

	write(1, "%", 1);
	return (1);
}
