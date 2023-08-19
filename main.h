#ifndef PRINT_H
#define PRINT_H

#include <stdio.h>
#include <stdarg.h>


int _printf(const char *format, ...);
int _putchar(char c, va_list args, int indx);
int is_format_specifier(char c);
void print_num(int);

/**
 * struct format_sp - Struct op
 * @ft_sp: specifier
 * @func_sp: fucnction for each specifer
 */
typedef struct format_sp
{
	char ft_sp;
	int (*func_sp)(va_list);

} format_sp;

/* ---------- Print_ch_str.c ------*/

int spf_char(va_list args);
int spf_str(va_list args);

#endif
