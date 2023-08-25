#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>
#include <stddef.h>


#define BUFF_SIZE 1024

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
int print_bi(unsigned int binary, int length);
int print_int(int, int);
int fsp_int(va_list integers, int str_len);
int fsp_binary(va_list args, int len);
int fsp_unsign(va_list args, int len);
int fsp_octal(va_list args, int len);
int fsp_hexa(va_list args, int len);
int fsp_heXa(va_list args, int len);
int fsp_String(va_list args, int len);
int fsp_addr(va_list args, int len);

/*--- sub_class -----*/
int _putchar(char c);
int print_digit(unsigned long num, unsigned int base, const char *digits);
unsigned int len_num(unsigned int, int);
int _strlen(char *s);
void reverse(char *str);

/*----- sub_class_2 ----*/
int custom_hexa(unsigned long addr);

#endif
