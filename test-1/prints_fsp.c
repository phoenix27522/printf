#include "main.h"
/**
 * print_fsp  - function that prints arguments
 * @fmt: the string
 * @args: the arguments this function links operators to actions
 * Return: string length
 */
int print_fsp(const char *fmt, va_list args)
{
	int indx = 0, num_of_char = 0, add = 0, i;

	ft_sp fmtsp_ary[] = {
		{'c', fsp_char}, {'s', fsp_str}, {'%', fsp_psnt}, {'\0', NULL},
		{'d', fsp_int}, {'i', fsp_int}
	};
	while (fmt != NULL && fmt[indx] != '\0')
	{
		i = 0;
		add = 0;
		if (fmt[indx] == '%')
		{
			indx++;
			if (fmt[indx] == '\0')
				return (-1);
			while (fmtsp_ary[i].sp != '\0')
			{
				if (fmt[indx] == fmtsp_ary[i].sp)
				{
					add = fmtsp_ary[i].fs(args);
					num_of_char += add;
					break;
				}
				i++;
			}
			if (fmtsp_ary[i].sp == '\0')
			{
				write(1, &fmt[indx - 1], 1);
				write(1, &fmt[indx], 1);
				num_of_char += 2;
			}
		}
		else
		{
			num_of_char++;
			write(1, &fmt[indx], 1);
		}
		indx++;
	}
	return (num_of_char);
}

