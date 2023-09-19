#include "main.h"

/**
 * print_str_rev - Print reverse format of string
 * @num: argument list
 *
 * Return: Length of the string
 */
int  print_str_rev(va_list num)
{
	int i, strlength;
	const char *str;

	str = va_arg(num, const char *);

	strlength = _strlen(str);

	for (i = strlength - 1; i >= 0; i--)
		_putchar(str[i]);

	return (strlength);
}

