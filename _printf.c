#include "main.h"
#include <stdarg.h>

/**
 * _printf - prints any character
 * @format: a string of characters and specifiers
 * Return: length of characters except null byte
 */
int _printf(const char *format, ...)
{
	/* declare variables, length, i */
	int length, i = 0;
	va_list var;
	int digit;
	char *str;

	va_start(var, format);

	/* calculate length of format */
	length = _strlen(format);

	/* printing format */
	i = 0;
	while (format[i])
	{
		/* check for % sign */
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'd':
					digit = va_arg(var, int);
					print_digit(digit);
					break;
				case 'i':
					digit = va_arg(var, int);
					print_int(digit);
					break;
				case 'u':
					digit = va_arg(var, unsigned int);
					unsigned_int(digit);
					break;
				case 'o':
					digit = va_arg(var, unsigned int);
					unsigned_octal(digit);
					break;
				case 'x':
					digit = va_arg(var, unsigned int);
					unsigned_hex_x(digit);
					break;
				case 'X':
					digit = va_arg(var, unsigned int);
					unsigned_hex_X(digit);
					break;
				case 'c':
					digit = va_arg(var, int);
					_putchar(digit);
					break;
				case 's':
					str = va_arg(var, char *);
					print_string(str);
					break;
			}
		} else
		{
			_putchar(format[i]);
		}
		i++;
	}
	return (length);
}
