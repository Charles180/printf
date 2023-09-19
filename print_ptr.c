#include "main.h"
#include <stdio.h>

int _strcmp(char *, char *);

/**
 * print_ptr - Print a number in hexadecimal format
 * @num: Number to print
 *
 * Return: number length
 */
int print_ptr(va_list num)
{
	char *ptr_buff;
	int strlength;

	ptr_buff = itoa(va_arg(num, unsigned long int), 16);

	if (!_strcmp(ptr_buff, "0"))
		return (print("(nil)"));

	strlength = print("0x");

	if (!_strcmp(ptr_buff, "-1"))
		strlength += print("ffffffffffffffff");
	else
		strlength += print(ptr_buff);

	return (strlength);
}

/**
 * _strcmp - Function to Compare 2 strings
 * @str1: String 1
 * @str2: String 2
 * Return: Integer
 */
int _strcmp(char *str1, char *str2)
{
	int i;

	for (i = 0; str1[i] != '\0'; i++)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
	}

	return (0);
}

