#include "main.h"

/**
 * _strlen - calculate the length of a string
 * @string: string
 * Return: length of string
 */
int _strlen(const char *string)
{
	int i = 0, length = 0;

	if (!string)
		return (length);

	while (string[i])
	{
		length++;
		i++;
	}

	return (length);
}
