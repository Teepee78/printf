#include "main.h"
#include <stdio.h>

/**
 * print_ptr - prints pointer
 * @ptr: pointer
 */
void print_ptr(void *ptr)
{
	int i = 0;
	char *str = (char *)ptr;

	printf("\nEntering while loop\n");

	while (str + i)
	{
		printf("Entered while loop\n");
		if (str[i] < 48 || str[i] > 57)
		{
			printf("Entered if block\n");
			_putchar(str[i]);
		} else
		{
			_putchar(str[i] + '0');
		}
		i++;
	}
}
