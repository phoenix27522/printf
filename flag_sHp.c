#include "main.h"
/**
 * handle_flags - Handles flag characters in the input format string.
 * @ptr: Pointer to a pointer to the input format string.
 * @flag_plus: Pointer to a boolean variable for the '+' flag.
 * @flag_space: Pointer to a boolean variable for the ' ' (space) flag.
 * @flag_hash: Pointer to a boolean variable for the '#' flag.
 *
 */
void handle_flags(const char *ptr, bool *flag_plus, bool *flag_space, bool *flag_hash)
{
	while (*ptr == '+' || *ptr == ' ' || *ptr == '#')
	{
		 switch (*ptr)
		 {
			 case '+':
				 *flag_plus = true;
				 add_buffer('+');
				 break;
			 case ' ':
				 *flag_space = true;
				  add_buffer(' ');
				 break;
			 case '#':
				 *flag_hash = true;
				  add_buffer('0');
				 break;
		 }
		 (ptr)++;
	}
}


