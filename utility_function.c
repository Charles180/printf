#include "main.h"

/**
 * _strlen - A function that calculates string length
 * @str: String to find length
 *
 * Return: str length
 */
int _strlen(const char *str)
{
	int a;

	for (a = 0; str[a] != 0; a++)
		;

	return (a);
}

/**
 * print - print char.
 * @str: string.
 *
 * Return: string length.
 */

int print(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; ++a)
		_putchar(str[a]);

	return (a);
}
