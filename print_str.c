#include "main.h"

/**
 * print_str - A function that Prints string
 * @num: list
 *
 * Return: length of String
 */

int print_str(va_list num)
{
	char *ptr;
	int ptr_len;

	ptr = va_arg(num, char*);
	ptr_len = print((ptr != NULL) ? ptr : "(null)");

	return (ptr_len);
}
