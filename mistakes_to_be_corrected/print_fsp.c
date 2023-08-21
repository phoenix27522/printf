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
	int i, num_char = 0;

	ft_sp fmtsp_ary[] = 
	{
		{'c', fsp_char}, {'s', fsp_str}, {'%', fsp_psnt}
	};

	for (;fmt != NULL && fmt[*indx] != '\0'; (*indx)++)
	{
		if (fmt[*indx] != '%')
		{
			for (i = 0; fmtsp_ary[i].sp != '\0'; i++)
			{
				if (fmt[*indx] == fmtsp_ary[i].sp)
				{
					num_char += fmtsp_ary[i].fs(args);/* here */
					break;/* forgat that, caused segment deafult*/
				}
			}

			if (fmtsp_ary[i].sp == '\0')
			{
				/*write(1, &fmt[*indx - 1], 1); printing the % character itself*/
				write(1, &fmt[*indx], 1);/*char is printed as-is, it didn't match any*/
				num_char++;
			}
		}
		/*when the current character in the format string is not %*/
		else
		{
			 (*indx)++;
			num_char++;
			write(1, &fmt[*indx], 1);
		}
	}
	return (num_char);
}
