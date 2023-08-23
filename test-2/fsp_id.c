#include "main.h"
/**
  * fsp_int - Print integer.
  * @integers: int arguments.
  * @str_len: string Length.
  * Return: length of string.
  */

int fsp_int(va_list integers, int str_len)
{
	int num;

	num = va_arg(integers, int);

	str_len = print_int(num, str_len);
	return (str_len);
}

/**
  * print_int_func - print integers.
  * @num: Numbers.
  * @str_len: string Length.
  * Return: string length.
  */
int print_int(int num, int str_len)
{
	unsigned long b;

	if (num < 0)
	{
		str_len = str_len + _putchar('-');
		b = -(unsigned int)num;
	}
	else
	{
		b = num;
	}
	str_len = str_len + digits_func(b, 10, "0123456789");

	return (str_len);
}
