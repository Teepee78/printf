#include "main.h"

/**
 * print_number - prints a number sent to this function
 * @args: list of arguments
 * Return: The number of arguments printed
 */
int print_number(va_list args)
{
	int n, div, len;
	unsigned int num;

	n = va_args(args, int);
	len = 0;

	if (n < 0)
	{
		len += _putchar('-');
		n = -n;
	}
	else
		num = n;

	/* if digit is greater than 10 */
	if (n / 10)
		print_number(digit / 10);

	len = _putchar(digit % 10 + '0');
	return (len);
}

/**
 * print_unsigned_number - prints a number sent to this function
 * @args: list of arguments
 * Return: The number of arguments printed
 */
int print_unsigned_number(unsigned int n)
{
	int len;

	/* if digit is greater than 10 */
	if (n / 10)
		print_unsigned_number(digit / 10);

	len = _putchar(digit % 10 + '0');
	return (len);
