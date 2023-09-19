#include "main.h"

/**
 * print_octalnums - Print unsigned octal number
 * @num: Number to print
 *
 * Return: number length
 */
int print_octalnums(va_list num)
{
	char *ptr_buff;
	int strlength;

	ptr_buff = itoa(va_arg(num, unsigned int), 8);

	strlength = print((ptr_buff != NULL) ? ptr_buff : "NULL");

	return (strlength);
}

