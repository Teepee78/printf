#ifndef PRINT_F
#define PRINT_F

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 *
 */
struct convert
{
	char *sym;
	int (*f)(va_list);
};
typedef struct convert conver_t;

/* main functions */
int _printf(const char *format, ...);
int parser(const char *format, conver_t f_list, va_list arg_list);
int _putchar(char c);
int print_char(va_list);
int print_string(va_list);
int print_percent(void);
int print_integer(va_list);

#endif
