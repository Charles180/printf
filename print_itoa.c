#include "main.h"

/**
 * itoa - function to convert integer to ascii
 * @num: num
 * @base: base
 *
 * Return: character
 **/
char *itoa(long int num, int base)
{
	static char *array = "0123456789abcdef";
	static char local_buffer[50];
	char sign = 0;
	char *ptr;
	unsigned long n = num;

	if (num < 0)
	{
		n = -num;
		sign = '-';
	}
	ptr = &local_buffer[49];
	*ptr = '\0';

	do      {
		*--ptr = array[n % base];
		n /= base;
	} while (n != 0);

	if (sign)
		*--ptr = sign;
	return (ptr);
}
