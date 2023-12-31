#include "main.h"

/**
  * print_fsp - returns pointer to function.
  * @fptr_find: character to be used to find pointer function.
  * Return: pointer to function or NULL.
  */
int (*print_fsp(char fptr_find))(va_list, int)
{
	ft_sp fmtsp_ary[] = {
		{'c', fsp_char},
		{'s', fsp_str},
		{'d', fsp_int},
		{'i', fsp_int},
		{'b', fsp_binary},
		{'u', fsp_unsign},
		{'o', fsp_octal},
		{'x', fsp_hexa},
		{'X', fsp_heXa},
		{'S', fsp_String},
		{'p', fsp_addr},
		{'r', fsp_rev},
		{'R', fsp_rot13}
	};

	int i;

	for (i = 0; fmtsp_ary[i].sp; i++)
	{
		if (fptr_find== fmtsp_ary[i].sp)
		{
			return (fmtsp_ary[i].f);
		}
	}

	return (NULL);
}
