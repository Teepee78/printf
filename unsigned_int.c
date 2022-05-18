#include "main.h"

/**
 * unsigned_int - prints unsigned integers
 * @digit: integer to be printed
 */
void unsigned_int(unsigned int digit)
{
	/* if integer is greater than 0 */
	if (digit / 10)
	{
		unsigned_int(digit / 10);
	}
	_putchar(digit % 10 + '0');
}
