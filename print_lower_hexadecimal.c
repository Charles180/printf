#include "main.h"

/**
 * print_lower_hexadecimal - Print in lower hexadecimal format
 * @num: The number to print in hexa
 *
 * Return: Hexa number length
 */
int print_lower_hexadecimal(va_list num)
{
	char *ptr_buff;
	int strlength;

	ptr_buff = itoa(va_arg(num, unsigned int), 16);

	strlength = print((ptr_buff != NULL) ? ptr_buff : "NULL");

	return (strlength);
}

