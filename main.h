#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct specifier - Struct specifier
 *
 * @str: The format specifier
 * @func: The function associated
 */
typedef struct specifier
{
	char str;
	int (*func)(va_list *);

} fmt_spec;

int _printf(const char *format, ...);
int (*get_func(char s))(va_list *);
int print_char(va_list *c);
int print_str(va_list *str);
int _strlen(char *str);

#endif /* MAIN_H */
