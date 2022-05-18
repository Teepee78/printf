#include "main.h"

/**
 * unsigned_octal - prints unsigned octal
 * @digit: digit to be printed as octal
 */
void unsigned_octal(unsigned int digit)
{
	int i, j;
	/* array to store octal number */
	unsigned int octalNum[100];

	/* counter for octal number array */
	i = 0;
	while (digit != 0)
	{
		/* storing remainder in octal array */
		octalNum[i] = digit % 8;
		digit = digit / 8;
		i++;
	}

	/* printing octal number array in reverse order*/
	for (j = i - 1; j >= 0; j--)
		_putchar(octalNum[j] + '0');
	}
