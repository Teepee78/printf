#include "main.h"

/**
 * print_char - prints characters
 * @list: list of arguments
 * Return: amount of characters printed
 */
int print_char(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}

/**
 * print_string - prints a string
 * @list: list of arguments
 * Return: amount of characters printed
 */
int print_string(va_list list)
{
	int i, len = 0;
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
		return (0);
	for (i = 0; str[i] != '\0'; i++)
		len += _putchar(str[i]);
	return (len);
}

/**
 * print_percent - prints a percent symbol
 * @list: list of arguments
 * Return: amount of characters printed
 */
int print_percent(va_list list)
{
	int percent = va_arg(list, int);

	percent = 37;

	_putchar(percent);
	return (1);
}

/**
 * rot13 - prints a percent symbol
 * @list: list of arguments
 * Return: amount of characters printed
 */
int rot13(va_list list)
{
	int i, j, length = 0;
	char *str;
	char str1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char str2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	str = va_arg(list, char *);
	if (str == NULL)
		return (0);
	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == str1[j])
			{
				length += _putchar(str2[j]);
				break;
			}
		}
		if (j == 53)
			length += _putchar(str[i]);
	}
	return (length);
}

/**
 * print_reverse - prints a string in reverse
 * @list: list of arguments
 * Return: amount of characters printed
 */
 int print_reverse(va_list list)
 {
	 int len, i;
	 char *str;

	 str = va_arg(list, char *);
	 if (str == NULL)
	 	return 0;
	for (len = 0; str[len] != '\0'; len++)
	{}
	for (i = len - 1; i >= 0; i--)
	{
		len += _putchar(str[i]);
	}
	return (len);
 }
