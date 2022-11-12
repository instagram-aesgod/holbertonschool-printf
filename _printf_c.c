#include "main.h"

/**
* printf_c - function that print a character
* @arg: arg
* @count: size of arg
*/

void printf_c(va_list arg, int *count)
{
	int x;

	*count += 1;
	x = va_arg(arg, int);
	_putchar(x);
}
