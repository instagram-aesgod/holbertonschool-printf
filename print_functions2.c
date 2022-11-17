#include "main.h"

/**
 * printf_d_i - funtion that prints a digit.
 * @list: arguments.
 * Return: 0.
 */
int printf_d_i(va_list list)
{
	int arg = va_arg(list, int);
	int i;

	i = gestion_i(arg);
	return (i);
}

/**
 * gestion_i - getion of the kind of digits
 * @arg: is an integer
 * Return: index
 */
int gestion_i(int arg)
{
	int i;
	unsigned int number;

	i = 0;
	number = arg;
	if (arg < 0)
	{
		i += _putchar('-');
		number = -number;
	}
	if (number == 0)
	{
		i += _putchar('0');
		return (i);
	}
	if (number / 10)
		i += gestion_i(number / 10);
	i += _putchar(number % 10 + '0');
	return (i);
}
