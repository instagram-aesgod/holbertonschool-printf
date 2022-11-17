#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

/**
 * struct printf_struct - structure
 * @p_str: pointer.
 * @f: variable.
 *
 * Description: array.
 */

typedef struct printf_struct
{
	char *p_str;
	int (*f)(va_list x);
} strct;

int _putchar(char c);
int _printf(const char *format, ...);
int printf_char(va_list list);
int printf_str(va_list list);
int printf_percent(va_list list);
int (*printf_function(char c))(va_list list);
int gestion_i(int arg);
int printf_d_i(va_list list);

#endif
