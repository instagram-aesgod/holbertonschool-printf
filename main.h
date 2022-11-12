#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stddef.h>

int _putchar(char c);
void _putcharstr(char *str);
int _printf(const char *format, ...);
void printf_c(va_list arg, int *count);
void printf_percent(va_list arg, int *count);
void printf_s(va_list arg, int *count);

/**
 * struct format - struct format
 * @type: the type
 * @f: the function associated
 */
typedef struct format
{
	char *type;
	void (*f)(va_list arg, int *count);
} form;

#endif
