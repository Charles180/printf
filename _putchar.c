#include "main.h"

/**
 * _putchar - writes character c to std output
 * @c: char to print
 *
 * Return: 1 if success, -1 if error, errno set appropriately
 */
int _putchar(char c)
{
	return (local_buffer(c));
}

/**
 * local_buffer - Save char in a local_buffer
 * @c: Char
 *
 * Return: 1
 **/
int local_buffer(char c)
{
	static char local_buffering[1024];
	static int i;

	if (c == -1 || i == 1024)
	{
		write(1, local_buffering, i);
		i = 0;
	}

	if (c != -1)
		local_buffering[i++] = c;

	return (1);
}
