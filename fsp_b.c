#include "main.h"
/**
 * fsp_binary - converts posetive num to binary
 * @args: argument
 * @len:  length of the binary
 * Return: int
 */

int fsp_binary(va_list args, int len)
{
	unsigned int binary;

	binary = va_arg(args, int);

	return (print_bi(binary, len));

}

/**
  * print_bi - unsigned int to binary.
  * @binary: be convert.
  * @length: characters lenght.
  * Return: length.
  */
int print_bi(unsigned int binary, int length)
{
	if ((binary / 2) != 0)
	{
		print_bi(binary / 2, length);
	}

	_putchar((binary % 2) + '0');
	length = length + len_func(binary, 2);

	return (length + 1);

}

