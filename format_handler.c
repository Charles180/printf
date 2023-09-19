#include "main.h"

/**
 * format_handler - Format controller
 * @str: String format
 * @num: arguments list
 *
 * Return: arguments total strlength with base string total strlength
 */
int format_handler(const char *str, va_list num)
{
	int strlength, i, a;

	strlength = 0;
	for (i = 0; str[i] != 0; i++)
	{
		if (str[i] == '%')
		{
			a = percent_format_handler(str, num, &i);
			if (a == -1)
				return (-1);

			strlength += a;
			continue;
		}

		_putchar(str[i]);
		strlength = strlength + 1;
	}


	return (strlength);
}

/**
 * percent_format_handler - Controller for % format
 * @str: String format
 * @num: arguments list
 * @i: index
 *
 * Return: strlength of elements printed
 */
int percent_format_handler(const char *str, va_list num, int *i)
{
	int strlength, j, num_formats;
	format formats[] = {
		{'s', print_str}, {'c', print_character},
		{'d', print_int}, {'i', print_int},
		{'b', print_bin}, {'u', print_int_unsigned},
		{'o', print_octalnums}, {'x', print_lower_hexadecimal},
		{'X', print_upper_hexadecimal}, {'p', print_ptr},
		{'r', print_str_rev}, {'R', print_rotated}
	};

	*i = *i + 1;

	if (str[*i] == '\0')
		return (-1);

	if (str[*i] == '%')
	{
		_putchar('%');
		return (1);
	}

	num_formats = sizeof(formats) / sizeof(formats[0]);
	for (strlength = j = 0; j < num_formats; j++)
	{
		if (str[*i] == formats[j].type)
		{
			strlength = formats[j].f_fun(num);
			return (strlength);
		}

	}

	_putchar('%'), _putchar(str[*i]);

	return (2);
}
