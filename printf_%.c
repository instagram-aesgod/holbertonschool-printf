#include "main.h"

/**
* printf_percent - function that print a '%'
* @arg: arg
* @count: size of arg
*/
void printf_percent(va_list __attribute__((unused)) arg, int *count)
{
	char *x = "%";

	*count += 1;
	_putchar(*x);
}
