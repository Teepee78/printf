#include "main.h"

/**
 * _printf - prints any character
 * @format: a string of characters and specifiers
 * Return: length of characters except null byte
 */
int _printf(const char *format, ...)
{
	/* declare variables, length, i */
	int length, i = 0;

	/* calculate length of format */
	length = _strlen(format);

	/* printing format */
	i = 0;
	while (format[i])
	{
		_putchar(format[i]);
		i++;
	}
	return (length);
}
