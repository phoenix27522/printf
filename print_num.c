#include "main.h"

/**
 * print_number - Print the given number
 * @n: number to print
 */

void print_num(int n)
{
        unsigned int num;

        if (n < 0)
        {
                num = -n;
                _putchar('-');
        }
        else
                num = n;
        if (num / 10)
                print_num(num / 10);
        _putchar(num % 10 + '0');
}
