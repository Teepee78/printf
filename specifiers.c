#include "main.h"
#include <stdarg.h>

/**
 * unsigned_hex_x - prints hexadecimal
 * @list: list of arguments
 * Return: amount of characters printed
 */
int unsigned_hex_x(va_list list)
{
	int length, i = 0, j, k;
	/* array to store hexadecimals */
	unsigned int *hex;
	unsigned int num = va_arg(list, unsigned int);
	hex_v hex_value[] = {
		{10, 'a'}, {11, 'b'}, {12, 'c'},
		{13, 'd'}, {14, 'e'}, {15, 'f'}, {0, '\0'}
	};

	hex = malloc(sizeof(unsigned int) * 100);
	while (num != 0)
	{
		/* store remainder in array */
		unsigned int temp = 0;

		temp = num % 16;
		if (temp < 10)
			hex[i] = temp + 48;
		else
			hex[i] = temp + 65;
		hex[i++] = temp;
		num = num / 16;
	}

	/* printing hexadecimal */
	for (j = i - 1; j >= 0; j--)
	{
		if (hex[j] > 9)
		{
			k = 0;
			while (hex_value[k].num != 0)
			{
				if (hex_value[k].num == hex[j])
					length += _putchar(hex_value[k].letter);
				k++;
			}
		} else
		{
			length += _putchar(hex[j] + '0');
		}
	}
	free(hex);
	return (length);
}

/**
 * unsigned_hex_X - prints hexadecimal
 * @list: list of arguments
 * Return: amount of characters printed
 */
int unsigned_hex_X(va_list list)
{
	int length, i = 0, j, k;
	/* array to store hexadecimals */
	unsigned int *hex;
	unsigned int num = va_arg(list, unsigned int);
	hex_v hex_value[] = {
		{10, 'A'}, {11, 'B'}, {12, 'C'},
		{13, 'D'}, {14, 'E'}, {15, 'F'}, {0, '\0'}
	};

	hex = malloc(sizeof(unsigned int) * 100);
	while (num != 0)
	{
		/* store remainder in array */
		unsigned int temp = 0;

		temp = num % 16;
		if (temp < 10)
			hex[i] = temp + 48;
		else
			hex[i] = temp + 65;
		hex[i++] = temp;
		num = num / 16;
	}

	/* printing hexadecimal */
	for (j = i - 1; j >= 0; j--)
	{
		if (hex[j] > 9)
		{
			k = 0;
			while (hex_value[k].num != 0)
			{
				if (hex_value[k].num == hex[j])
					length += _putchar(hex_value[k].letter);
				k++;
			}
		} else
		{
			length += _putchar(hex[j] + '0');
		}
	}
	free(hex);
	return (length);
}

/**
 * unsigned_octal - prints unsigned octal
 * @list: list of arguments
 * Return: amount of characters printed
 */
int unsigned_octal(va_list list)
{
	int length, i, j;
	/* array to store octal */
	unsigned int * octal;
	unsigned int num = va_arg(list, unsigned int);

	octal = malloc(sizeof(unsigned int) * 100);
	i = 0;
	while (num != 0)
	{
		/* store remainder in octal array */
		octal[i] = num % 8;
		num = num / 8;
		i++;
	}

	/* print array in reverse order */
	for (j = i - 1; j >= 0; j--)
	{
		length += _putchar(octal[j] + '0');
	}
	free(octal);
	return (length);
}
