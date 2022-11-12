#include "main.h"


/**
* print_c - Print character
* @ap: argument pointer
* Return: num of parameters printed
*/
int print_c(va_list ap)
{
	char c = va_arg(ap, int);

	_putchar(c);
	return (1);

}
