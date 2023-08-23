#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>
#include <stddef.h>

int (*print_fsp(char fptr_find))(va_list, int);
/**
  *struct formats - hold fromat specifiers & functions.
  *@id: character.
  *@f: function pointer.
*/
typedef struct fmat_sp
{
	char sp;
	int (*f)(va_list, int);
}ft_sp ;

int _putchar(char c);
int _printf(const char *format, ...);
int fsp_int(va_list integers, int str_len);
int print_int(int, int);
int digits_func(unsigned long num, unsigned int targ, const char *digits);
unsigned int len_func(unsigned int, int);

#endif
