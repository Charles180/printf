#include "main.h"

/**
 * print_bin - Print a number in base 2
 * @num: Base 2 numbers to print
 *
 * Return: len in binary
 */
int print_bin(va_list num)
{
	char *ptr_buff;
	int strlength;

	ptr_buff = itoa(va_arg(num, unsigned int), 2);

	strlength = print(ptr_buff);

	return (strlength);
}
