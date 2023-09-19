#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

/* utility_function.c */
int _strlen(const char *);
int print(char *);
char *itoa(long int, int);

/* _printf.c */
int _printf(const char *, ...);

/* format_handler.c */
int format_handler(const char *, va_list);
int percent_format_handler(const char *, va_list, int *);

/* printers */
int print_str(va_list);
int print_character(va_list);
int print_int(va_list);
int print_bin(va_list);
int print_rotated(va_list);
int print_int_unsigned(va_list);
int print_octalnums(va_list);
int print_lower_hexadecimal(va_list);
int print_upper_hexadecimal(va_list);
int print_ptr(va_list);
int print_str_rev(va_list);

/* _putchar.c */
int _putchar(char);
int local_buffer(char);

/**
 * struct _format - Typedef struct
 *
 * @type: Format type
 * @f_fun: The associated function
 **/
typedef struct _format
{
	char type;
	int (*f_fun)(va_list);
} format;


#endif

