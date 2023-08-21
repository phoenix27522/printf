#include "main.h"
/**
 * print_fsp - outputs argument based on specifer 
 * @fmt: formated string in which to print the arguments
 * @indx: location of the format specifier
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_fsp(const char *fmt, va_list args, int *indx)
{
	int i, error = -1, len = 0;

	ft_sp fmtsp_ary[] = 
	{
		{'c', fsp_char}, {'s', fsp_str}, {'%', fsp_psnt}
	};

	for (i = 0; fmtsp_ary[i].sp != '\0'; i++)
	{
	       if (fmt[*indx] == fmtsp_ary[i].sp)
	       {
		       return (fmtsp_ary[i].fs(args));/* here */
	       }
	}
	if (fmtsp_ary[i].sp == '\0')
	{
		if (fmt[*indx] == '\0')
			return (-1);
		len += write(1, "%%", 1);
		if (fmt[*indx - 1] == ' ')
			len += write(1, " ", 1);
		else
		{
			--(*indx);
			while (fmt[*indx] != ' ' && fmt[*indx] != '%')
				--(*indx);
			if (fmt[*indx] == ' ')
				--(*indx);
			return (1);
		}
		len += write(1, &fmt[*indx], 1);
		return (len);
	}
	
	return (error);
}
