#include "main.h"

int is_lower_case(char);
char *string_upper(char *);

/**
 * print_upper_hexadecimal - Print uppercase hexadecimal format
 * @num: The number to print
 *
 * Return: number length
 **/
int print_upper_hexadecimal(va_list num)
{
	char *ptr_buff;
	int strlength;

	ptr_buff = itoa(va_arg(num, unsigned int), 16);
	ptr_buff = string_upper(ptr_buff);

	strlength = print((ptr_buff != NULL) ? ptr_buff : "NULL");

	return (strlength);
}

/**
 * is_lower_case - Check if a given char is in lowercase format
 * @c: Char
 * Return: 0 or 1
 **/
int is_lower_case(char c)
{
	return (c >= 'a' && c <= 'z');
}

/**
 * string_upper - convert a string to uppercase
 * @str: String
 * Return: uppercase
 */
char *string_upper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (is_lower_case(str[i]))
		{
			str[i] = str[i] - 32;
		}
	}

	return (str);
}

