#include "main.h"

/**
 * rotate13 - A function to encode a str using
 * @str: String to enconde
 * Return: String encode
 */
int rotate13(char *str)
{
	int i, j;
	char *normal, *rotate13;

	normal = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	rotate13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; normal[j] != '\0'; j++)
		{
			if (str[i] == normal[j])
			{
				_putchar(rotate13[j]);
				break;
			}
		}

		if (!normal[j])
			_putchar(str[i]);
	}
	return (i);
}

/**
 * print_rotated - Prints the rotated string
 * @num: encoded string
 *
 * Return: string encoded Length
 */
int print_rotated(va_list num)
{
	char *ptr;
	int ptr_len;

	ptr = va_arg(num, char *);
	ptr_len = rotate13((ptr != NULL) ? ptr : "(ahyy)");

	return (ptr_len);
}
