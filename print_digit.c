#include "main.h"

/**
 * print_digit - prints digits
 * @digit: digit to be printed
 */
void print_digit(int digit)
{
	if (digit < 0)
	{
		_putchar('-');
		digit = -digit;
	}

	/* if digit is greater than 10 */
	if (digit / 10)
		print_digit(digit / 10);

	_putchar(digit % 10 + '0');
}
