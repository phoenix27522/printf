#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char *fsp,va_list args, int *indx)
{
	int i;

	format_sp format_sp_arr[] = {
		{'c', spf_chr}, {'s', spf_str}, {'%', spf_psnt}
	};

	for (i = 0; format_sp_arr[i].format_sp != '\0'; i++)
	{
		if (fsp[indx] == format_sp_arr[i].format_sp)
				return (format_sp_arr[i].func_sp(args));
	}
	
	return (write(1, &fsp[*indx], 1));
}
