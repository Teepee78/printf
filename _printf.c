#include "main.h"

/**
 * _printf - Receives main string and all necessary parameters
 * to print a formatted string
 * @format: string containing desired formatted
 * Return: number of characters to be printed (null byte excluded)
 */
int _printf(const char *format, ...)
{
	int printed_chars;
	/* array linking characters to respective function*/
	conver_t f_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_integer},
		{"i", print_integer},
		{"b", print_binary},
		{"u", unsigned_integer},
		{"o", unsigned_octal},
		{"x", unsigned_hex_x},
		{"X", unsigned_hex_X},
		/*{"r", print_reversed},
		{"p", print_address},
		{"R", rot13},*/
		{NULL, NULL}
	};
	/* creating va_list*/
	va_list arg_list;

	/* string in format is null*/
	if (format == NULL)
		return (-1);

	va_start(arg_list, format);
	/* Calling parser function */
	printed_chars = parser(format, f_list, arg_list);
	va_end(arg_list);
	return (printed_chars);
}
