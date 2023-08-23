#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>
#include <stddef.h>

int (*print_fsp(char fptr_find))(va_list, int);
int _printf(const char *format, ...);

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
int main(void);
int print_bi(unsigned int num, int length);
int print_int(int, int);
int fsp_int(va_list integers, int str_len);
int fsp_binary(va_list args, int len);

/*--- sub_class -----*/
int _putchar(char c);
int digits_func(unsigned long num, unsigned int targ, const char *digits);
unsigned int len_func(unsigned int, int);
int _strlen(const char *s);
void reverse(const char *str);

#endif
