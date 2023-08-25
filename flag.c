#include "main.h"
/**
 * fsp_flags - Matches flags with corresponding values.
 * @args: accept argumnts
 * @len: length
 * Return: If flag characters are matched - a corresponding value.
 *         Otherwise - 0.
 */
int fsp_flag(const char *flag, char *indx)
{
	int i, j;
	unsigned char ret = 0;
	flag_t flags[] = {
		{'+', PLUS},
		{' ', SPACE},
		{'#', HASH}
	};

	for (i = 0; flag[i]; i++)
	{
		for (j = 0; flags[j].flag != 0; j++)
		{
			if (flag[i] == flags[j].flag)
			{
				(*indx)++;
				if (ret == 0)
					ret = flags[j].value;
				else
					ret |= flags[j].value;
				break;
			}
		}
		if (flags[j].value == 0)
			break;
	}

	return (ret);
}
