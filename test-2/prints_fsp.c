#include "main.h"

/**
  * print_fsp - returns pointer to function.
  * @fptr_find: character to be used to find pointer function.
  * Return: pointer to function or NULL.
  */
int (*print_fsp(char fptr_find))(va_list, int)
{
	ft_sp fmtsp_ary[] = {
		{'d', fsp_int},
		{'i', fsp_int}
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
