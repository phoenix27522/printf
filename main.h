#ifndef PRINT_H
#define PRINT_H

#include <stdio.h>
#include <stdarg.h>


int _printf(const char *format, ...);
int _putchar(char c);
void print_num(int);

/**
 * struct format_sp - Struct op
 * @ft_sp: specifier
 * @func_sp: fucnction for each specifer
 */
typedef struct format_sp
{
	char ft_sp;
	int (*func_sp)(va_list args, int);

} format_sp;


#endif
