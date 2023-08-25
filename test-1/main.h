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
  *struct formats - hold fromat specifiers & functions.
  *@id: character.
  *@f: function pointer.
*/
typedef struct fmat_sp
{
	char sp;
	int (*fs)(va_list, char[], int, int, int);
}ft_sp ;
/*-----size------*/
#define S_LONG 2
#define S_SHORT 1


/*----- fsp -----*/
int fsp_char(va_list args);
int fsp_str(va_list args);
int fsp_psnt(va_list args);
/*-----fsp_id -----*/
int fsp_int(va_list args, int str_len);
int print_int(int num, int str_len);

/* ---------jack of all trade --------*/
int _putchar(char c);
int digits_func(unsigned long num, unsigned int targ, const char *digits);
int _strlen(char *s);
unsigned int len_num(unsigned int num, int base);


#endif
