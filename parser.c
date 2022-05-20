#include "main.h"
#include <stdarg.h>

/**
 * parser - receives the main string and all the necessary parameters to
 * print a formatted string
 * @format: string to be printed
 * @f_list: array of conver_t structures
 * @arg_list: list of variadic arguments
 * Return: amount of characters printed
 */
int parser(const char *format, conver_t f_list[], va_list arg_list)
{
	int i, j, printed_chars, r_val;

	printed_chars = 0;
	/* Iterate through format string*/
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%') /* check for format specifier */
		{
			/* Iterate through struct to find the right func */
			for (j = 0; f_list[j].sym != NULL; j++)
			{
				if (format[i + 1] == f_list[j].sym[0])
				{
					/*if function is found, r_val = return value 1*/
					r_val = f_list[j].f(arg_list);
					if (r_val == -1)
						return (-1);
					printed_chars += r_val;
					break;
				}
			}
			/* if next character is not in our specifier list*/
			if (f_list[j].sym == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					printed_chars += 2;
				} else
					return (-1);
			} i++; /* Updating i to skip format symbols*/
		} else
		{
			/* Prints rest of string */
			_putchar(format[i]);
			printed_chars++;
		}
	}
	return (printed_chars);
}
