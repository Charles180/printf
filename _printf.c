#include "main.h"

/**
 * _printf - Recareates the printf function according to a format
 * @format: The format string
 * Return: The number of characters printed
 */
int _printf(const char *format, ...)
{
	int strlength;
	va_list args;

	if (format == NULL)
		return (-1);

	strlength = _strlen(format);
	if (strlength <= 0)
		return (0);

	va_start(args, format);
	strlength = format_handler(format, args);

	_putchar(-1);
	va_end(args);

	return (strlength);
}

