#include "main.h"
/**
 * print_fsp  - function that prints arguments
 * @fmt: the string
 * @flag: handel flag
 * @args: the arguments this function links operators to actions
 * Return: string length
 */
int print_fsp(const char *fmt, va_list args, int flags,)
{

	ft_sp fmtsp_ary[] = {
		{'c', fsp_char}, {'s', fsp_str}, {'%', fsp_psnt}, {'\0', NULL},
		{'d', fsp_int}, {'i', fsp_int}, {'b', fsp_binary}{'u', fsp_unsign},
		{'o', fsp_octal}, {'x', fsp_hexa}, {'X', fsp_heXa}, {'S', fsp_String},
		{'p', fsp_addr}, {'r', fsp_rev}, {'R', fsp_rot13}
	};

	int i;

	for (i = 0; fmtsp_ary[i].sp; i++)
	{
		if (fptr_find == fmtsp_ary[i].sp)
		{
			return (fmtsp_ary[i].f);
		}
	}

	return (NULL);
}

