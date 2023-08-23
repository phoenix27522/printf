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
  * @num: be convert.
  * @length: characters lenght.
  * Return: length.
  */
int print_bi(unsigned int num, int length)
{
	unsigned int num_digit = 1, indx = 0, temp;
	 char *binary_str;

	temp = num;

	while (temp >>= 1)
	{
		num_digit++;
	}

	binary_str = (char *)malloc((num_digit + 1) * sizeof(char));

	if (binary_str == NULL)
		return (-1);
	while (temp > 0)
	{
		binary_str[indx++] = (temp % 2) + '0';
		temp /= 2;
	}

	binary_str[indx] = 0;

	reverse(binary_str);

	length = _strlen(binary_str);

	free(binary_str);

	return (length);

}

