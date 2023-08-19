#ifndef PRINT_H
#define PRINT_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char *fsp, va_list args, int *indx);
int is_format_specifier(char c);
void print_num(int);

/**
 * struct format_sp - Struct op
 * @ft_sp: specifier
 * @func_sp: fucnction for each specifer
 */
struct format_sp
{
	char ft_sp;
	int (*func_sp)(va_list);

};

/**
 * typedef struct fmt fmt_t - Struct op
 *
 * @ft_sp: The format.
 * @func_sp: The function associated.
 */
typedef struct format_sp format_sp1;
/* ---------- Print_ch_str.c ------*/

int spf_char(va_list args);
int spf_str(va_list args);
int spf_psnt(va_list args);

#endif
