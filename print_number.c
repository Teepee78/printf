#include "main.h"
#include <stdarg.h>
#include <stdlib.h>


/**
 * print_unsigned_number - prints a number sent to this function
 * @n: number
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

/**
 * print_integer - prints an integer
 * @list: list of arguments
 * Return: amount of characters printed
 */
int print_integer(va_list list)
{
	int i, j, n, len;
	int *number;

	number = malloc(sizeof(int) * 100);

	n = va_arg(list, int);
	len = 0;

	if (n < 0)
	{
		len += _putchar('-');
		n = -n;
	}

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
	free(number);
	return (len);
}

/**
 * print_binary - prints binary
 * @list: list of arguments
 * Return: amount of characters printed
 */
int print_binary(va_list list)
{
	int length = 0, i, j;
	int *binary;
	int bin = va_arg(list, int);

	binary = malloc(sizeof(int) * 200);
	i = 0;
	while (bin != 0)
	{
		binary[i] = bin % 2;
		bin = bin / 2;
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		length += _putchar(binary[j] + '0');
	}
	free(binary);
	return (length);
}

/**
 * unsigned_integer - prints unsigned integer
 * @list: list of aarguments
 * Return: amount of characters printed
 */
int unsigned_integer(va_list list)
{
	int i, j, len;
	int *number;
	unsigned int n;

	number = malloc(sizeof(int) * 100);
	n = va_arg(list, unsigned int);
	len = 0;

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
	free(number);
	return (len);
}
