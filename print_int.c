#include "main.h"

/**
 * print_int - A function to print numbers in base 10
 * @num: Num to print in base 10
 *
 * Return: Length of num in decimal
 **/
int print_int(va_list num)
{
	char *ptr_buff;
	int strlength;

	ptr_buff = itoa(va_arg(num, int), 10);

	strlength = print((ptr_buff != NULL) ? ptr_buff : "NULL");

	return (strlength);
}
