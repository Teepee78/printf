#include "main.h"

/**
 * print_int - prints integers
 * @digit: integer to be printed
 */
void print_int(int digit)
{
	if (digit < 0)
	{
		_putchar('-');
		digit = -digit;
	}

	/* if integer is greater than 10 */
	if (digit / 10)
		print_int(digit / 10);

	_putchar(digit % 10 + '0');
}
