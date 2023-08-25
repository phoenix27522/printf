#include "main.h"

char buffer[BUFF_SIZE];
int buffer_index = 0;

/**
 * dicard_buff - func writes the contents of the buffer to the standard output
 */
void discard_buff()
{
	write(1, buffer, buffer_index);
	buffer_index = 0;
}

/**
 * append_to_buffer - add a character `c` to the buffer in the `_printf()` implementation
 *
 * @c: character you would to print.
 */
void checker_buffer(char c)
{
	if (buffer_index >= BUFF_SIZE - 1)
		discard_buff();

	buffer[buffer_index++] = c;
}
