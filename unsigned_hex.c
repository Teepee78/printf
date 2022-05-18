#include "main.h"

/**
* unsigned_hex_x - prints unsigned hexadecimal
* @digit: integer to convert
*/
void unsigned_hex_x(unsigned int digit)
{
	int i, j;
	/* array to store hexadecimal number */
	char hexNum[100];

	/* counter for hexadecimal number array */
	i = 0;
	while (digit != 0)
	{
		/* storing remainder in hexadecimal array */
		int temp = 0;
		temp = digit % 16;
		if (temp < 10)
		{
			hexNum[i] = temp + 48;
		}
		else
        {
            hexNum[i] = temp + 65;
        }
		hexNum[i++] = temp;
		digit = digit / 16;
	}

	/* printing hexadecimal number array in reverse order*/
	for (j = i - 1; j >= 0; j--)
	{
		if (hexNum[j] > 9)
		{
			switch(hexNum[j])
			{
				case 10:
					_putchar('a');
					break;
				case 11:
					_putchar('b');
					break;
				case 12:
					_putchar('c');
					break;
				case 13:
					_putchar('d');
					break;
				case 14:
					_putchar('e');
					break;
				case 15:
					_putchar('f');
					break;
			}
		} else
		{
			_putchar(hexNum[j] + '0');
		}
	}
}

/**
* unsigned_hex_X - prints unsigned hexadecimal
* @digit: integer to convert
*/
void unsigned_hex_X(unsigned int digit)
{
	int i, j;
	/* array to store hexadecimal number */
	int hexNum[100];

	/* counter for hexadecimal number array */
	i = 0;
	while (digit != 0)
	{
		/* storing remainder in hexadecimal array */
		int temp = 0;
		temp = digit % 16;
		if (temp < 10)
		{
			hexNum[i] = temp + 48;
		}
		else
        {
            hexNum[i] = temp + 55;
        }
		hexNum[i++] = temp;
		digit = digit / 16;
	}

	/* printing hexadecimal number array in reverse order*/
	for (j = i - 1; j >= 0; j--)
	{
		if (hexNum[j] > 9)
		{
			switch(hexNum[j])
			{
				case 10:
					_putchar('A');
					break;
				case 11:
					_putchar('B');
					break;
				case 12:
					_putchar('C');
					break;
				case 13:
					_putchar('D');
					break;
				case 14:
					_putchar('E');
					break;
				case 15:
					_putchar('F');
					break;
			}
		} else
		{
			_putchar(hexNum[j] + '0');
		}
	}
}
