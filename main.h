#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>



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

/* ---------- ch_str_psnt.c ------*/

int fsp_char(va_list args);
int fsp_str(va_list args);
int fsp_psnt(va_list args);


/* ---------jack of all trade --------*/
int _strlen(const char *s);

#endif
