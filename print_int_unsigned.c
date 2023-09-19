#include "main.h"

/**
 * print_int_unsigned - Print a unsigned int
 * @num: Number to print
 *
 * Return: Number length
 */
int print_int_unsigned(va_list num)
{
	char *ptr_buff;
	int strlength;

	ptr_buff = itoa(va_arg(num, unsigned int), 10);

	strlength = print((ptr_buff != NULL) ? ptr_buff : "NULL");

	return (strlength);
}
