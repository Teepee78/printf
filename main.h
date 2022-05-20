#ifndef PRINT_F
#define PRINT_F

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct convert - convert specifier
 * @sym: letter
 * @f: function
 */
struct convert
{
	char *sym;
	int (*f)(va_list);
};
typedef struct convert conver_t;

/**
 * struct hexadecimal - convert hexadecimal
 * @num: number
 * @letter: character
 */
typedef struct hexadecimal
{
	unsigned int num;
	char letter;
} hex_v;

/* main functions */
int _printf(const char *format, ...);
int parser(const char *format, conver_t f_list[], va_list arg_list);
int _putchar(char c);
int print_char(va_list);
int print_string(va_list);
int print_percent(va_list);
int print_integer(va_list);
int print_binary(va_list);
int unsigned_integer(va_list);
int unsigned_hex_x(va_list);
int unsigned_hex_X(va_list);
int unsigned_octal(va_list);
int init_hex_array(unsigned int *array, unsigned int num);

#endif
