#include "main.h"

/**
 * unsigned_int - prints unsigned integers
 * @digit: integer to be printed
 */
 void unsigned_int(unsigned int digit)
 {
	 if (digit == 0)
	 {
		 _putchar('0');
	 }
	 if (digit < 1)
	 {
		 digit = -digit;
	 }
	 print_int(digit);
 }
