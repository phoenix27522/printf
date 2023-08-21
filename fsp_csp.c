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

	return (write(1, &c_fsp, 1));
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
		str = "(null)";

	while (str[len] != '\0')
		len++;

	return(write(1, str, len));
}

/**
 * spf_str - prints string
 * @args: list of arguments
 * Return: zero
 */
int fsp_psnt(va_list args)
{
	(void)args;

	return (write(1, "%%", 1));
}
