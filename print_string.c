#include "main.h"

/**
 * print_string - prints a string
 * @str: string to print
 */
void print_string(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}
}
