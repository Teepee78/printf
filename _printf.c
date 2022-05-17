#include "main.h"

/**
 * _printf - prints any character
 * @format: a string of characters and specifiers
 * Return: length of characters except null byte
 */
int _printf(const char *format, ...)
{
	/* declare variables, length, i */
	int length = 0, i = 0;

	/* calculate length of format */
	while (format[i])
	{
		length++;
		i++;
	}

	return (length);
}
