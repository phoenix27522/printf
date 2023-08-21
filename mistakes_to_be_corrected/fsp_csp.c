#include "main.h"
/**
 * spf_char - print char
 * @args: List a of arguments
 * Return: zero
 */
int fsp_char(va_list args)
{
	char c_fsp;

	c_fsp = va_arg(args, int);
	write(1, &c_fsp, 1);

	if (c_fsp == '\0')
		return (0);

	return (1);
}

/**
 * spf_str - prints string
 * @args: list of arguments
 * Return: zero
 */
int fsp_str(va_list args)
{
	int len = 0;
	char *str;

	str = va_arg(args, char *);

	if (str == NULL)
	{
		str = "(null)";
		write(1, str, 6);
	}
	while (str[len] != '\0')
	{
		write(1, str + len, 1);
		len++;
	}

	return(len);
}

/**
 * spf_str - prints string
 * @args: list of arguments
 * Return: zero
 */
int fsp_psnt(va_list args)
{
	(void)args;

	write(1, "%", 1);

	return (1);
}
