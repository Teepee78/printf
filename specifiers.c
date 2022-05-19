#include "main.h"

/**
 * print_char - prints characters
 * @list: list of arguments
 Return: amount of characters printed
 */
int print_char(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}

/**
 * print_string - prints a string
 * list of arguments
 * Return: amount of characters printed
 */
int print_string(va_list list)
{
	int i;
	char *str;

	str = va_arg(list, char *);
	if (str = NULL)
		str = "(null)";
	for (i = 0; str[i] != '/0'; i++)
		_putchar(str[i]);
	return (i);
}

/**
 * print_percent - prints a percent symbol
 * @list: list of arguments
 * Return: amount of characters printed
 */
int print_percent(void)
{
	_putchar('%');
	return(1);
}

/**
 * print_integer - prints an integer
 * @list: list of arguments
 * Return: amount of characters printed
 */
int print_integer(va_list list)
{
	int num_length;

	num_length = print_number(list);
	return(num_length);
}

/**
 * print_binary - prints binary
 * @list: list of arguments
 * Return: amount of characters printed
 */
int print_binary(va_list list)
{

	return(1);
}
