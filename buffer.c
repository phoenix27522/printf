#include "main.h"i
/**
 * dicard_buff - func writes the contents of the buffer to the standard output
 */
void discard_buff()
{
	char buffer[BUFFER_SIZE];
	int buffer_index = 0;

	write(1, buffer, buffer_index);
	buffer_iindex = 0;
}

/**
 * append_to_buffer - add a character `c` to the buffer in the `_printf()` implementation
 *
 * @c: character you would to print.
 */
void checker_buffer(char c)
{
	char buffer[BUFFER_SIZE];
	int buffer_index = 0;

	if (buffer_index >= BUFFER_SIZE - 1)
		discard_buff();

	buffer[buffer_index++] = c;
}
