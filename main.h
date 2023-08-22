#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>



int _printf(const char *format, ...);
int print_fsp(const char *fmt, va_list args);

/**
 * struct fmat_sp - Struct op
 * @sp: specifier
 * @fs: fucnction for each specifer
 */
struct fmat_sp
{
	char sp;
	int (*fs)(va_list);

};

/**
 * typedef struct fmat_sp ft_sp - Struct op
 *
 * @sp: specifier.
 * @fs: the function associated.
 */
typedef struct fmat_sp ft_sp;

/*-----size------*/
#define S_LONG 2
#define S_SHORT 1

/* ---------- ch_str_psnt.c ------*/

int fsp_char(va_list args);
int fsp_str(va_list args);
int fsp_psnt(va_list args);
int fsp_int(va_list arg);

/* ---------jack of all trade --------*/
int _strlen(const char *s);
int _putchar(char c);
void reverse_string(char *s);
#endif
