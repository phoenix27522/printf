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
	unsigned int indx = 0, num = binary;
	char *binary_str;

	if (binary == NULL)
		return (-1);

	length = length + len_func(binary, 2);

	binary_str = (char *)malloc((length + 1) * sizeof(char));

	if (binary_str == NULL)
		return (-1);

	while (num > 0)
	{
		binary_str[indx++] = (num % 2) + '0';
		num /= 2;
	}

	binary_str[indx] = '\0';

	reverse(binary_str);


	free(binary_str);

	return (length + 1);

}

