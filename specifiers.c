#include "main.h"

/**
 * print_char - prints characters
 * @list: list of arguments
 Return: amount of characters printed
 */
int print_char(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}

/**
 * print_string - prints a string
 * list of arguments
 * Return: amount of characters printed
 */
int print_string(va_list list)
{
	int i, len = 0;
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
		str = "(null)";
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
	return(1);
}

/**
 * print_integer - prints an integer
 * @list: list of arguments
 * Return: amount of characters printed
 */
int print_integer(va_list list)
{
	int i, j, n, len;
	int number[100];

	n = va_arg(list, int);
	len = 0;

	if (n < 0)
	{
		len += _putchar('-');
		n = -n;
	}

	i = 0;
	while (n != 0)
	{
		number[i] = n % 10;
		n = n / 10;
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		len += _putchar(number[j] + '0');
	}
	return (len);
}

/**
 * print_binary - prints binary
 * @list: list of arguments
 * Return: amount of characters printed
 */
int print_binary(va_list list)
{
	int length = 0, i, j;
	int binary[200];
	int bin = va_arg(list, int);

	i = 0;
	while (bin != 0)
	{
		binary[i] = bin % 2;
		bin = bin / 2;
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		length += _putchar(binary[j] + '0');
	}
	return (length);
}

/**
 * unsigned_integer - prints unsigned integer
 * @list: list of aarguments
 * Return: amount of characters printed
 */
int unsigned_integer(va_list list)
{
	int i, j, len;
	int number[100];
	unsigned int n;

	n = va_arg(list, unsigned int);
	len = 0;

	i = 0;
	while (n != 0)
	{
		number[i] = n % 10;
		n = n / 10;
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		len += _putchar(number[j] + '0');
	}
	return (len);
}

/**
 * unsigned_hex_x - prints hexadecimal
 * @list: list of arguments
 * Return: amount of characters printed
 */
int unsigned_hex_x(va_list list)
{
	int length, i, j;
	/* array to store hexadecimals */
	unsigned int hex[100];
	unsigned int num = va_arg(list, unsigned int);

	i = 0;
	while (num != 0)
	{
		/* store remainder in array */
		unsigned int temp = 0;
		temp = num % 16;

		if (temp < 10)
		{
			hex[i] = temp + 48;
		} else
		{
			hex[i] = temp + 65;
		}

		hex[i++] = temp;
		num = num / 16;
	}

	/* printing hexadecimal */
	for (j = i - 1; j >= 0; j--)
	{
		if (hex[j] > 9)
		{
			switch (hex[j])
			{
				case 10:
					length += _putchar('a');
					break;
				case 11:
					length += _putchar('b');
					break;
				case 12:
					length += _putchar('c');
					break;
				case 13:
					length += _putchar('d');
					break;
				case 14:
					length += _putchar('e');
					break;
				case 15:
					length += _putchar('f');
					break;
			}
		} else
		{
			length += _putchar(hex[j] + '0');
		}
	}
	return (length);
}

/**
 * unsigned_hex_X - prints hexadecimal
 * @list: list of arguments
 * Return: amount of characters printed
 */
int unsigned_hex_X(va_list list)
{
	int length, i, j;
	/* array to store hexadecimals */
	unsigned int hex[100];
	unsigned int num = va_arg(list, unsigned int);

	i = 0;
	while (num != 0)
	{
		/* store remainder in array */
		unsigned int temp = 0;
		temp = num % 16;

		if (temp < 10)
		{
			hex[i] = temp + 48;
		} else
		{
			hex[i] = temp + 65;
		}

		hex[i++] = temp;
		num = num / 16;
	}

	/* printing hexadecimal */
	for (j = i - 1; j >= 0; j--)
	{
		if (hex[j] > 9)
		{
			switch (hex[j])
			{
				case 10:
					length += _putchar('A');
					break;
				case 11:
					length += _putchar('B');
					break;
				case 12:
					length += _putchar('C');
					break;
				case 13:
					length += _putchar('D');
					break;
				case 14:
					length += _putchar('E');
					break;
				case 15:
					length += _putchar('F');
					break;
			}
		} else
		{
			length += _putchar(hex[j] + '0');
		}
	}
	return (length);
}

/**
 * unsigned_octal - prints unsigned octal
 * @list: list of arguments
 * Return: amount of characters printed
 */
int unsigned_octal(va_list list)
{
	int length, i, j;
	/* array to store octal */
	unsigned int octal[100];
	unsigned int num = va_arg(list, unsigned int);

	i = 0;
	while (num != 0)
	{
		/* store remainder in octal array */
		octal[i] = num % 8;
		num = num / 8;
		i++;
	}

	/* print array in reverse order */
	for (j = i - 1; j >= 0; j--)
	{
		length += _putchar(octal[j] + '0');
	}
	return (length);
}
