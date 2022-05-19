#include "main.h"

/**
 * print_number - prints a number sent to this function
 * @args: list of arguments
 * Return: The number of arguments printed
 */
int print_number(va_list args)
{
	int i, j, n, len;
	int number[100];

	n = va_arg(args, int);
	len = 0;

	if (n < 0)
	{
		len += _putchar('-');
	}
	n = n;

	i = 0;
	while (n != 0)
	{
		number[i] = n % 10;
		n = n / 10;
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		len += _putchar(number[j] + '0');
	}
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
		print_unsigned_number(n / 10);

	len = _putchar(n % 10 + '0');
	return (len);
}
