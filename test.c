#include "main.h"
#include <stdio.h>

int main(void)
{
	int length;

	length = _printf("five\n");

	printf("Length of string is: %d\n", length);

	_printf("abcde3\n");
	return (0);
}
