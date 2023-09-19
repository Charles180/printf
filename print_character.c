#include "main.h"
/**
 * print_character - print char.
 * @num: list.
 *
 * Return: 1
 */
int print_character(va_list num)
{
	int a;

	a = va_arg(num, int);

	_putchar(a);

	return (1);
}
