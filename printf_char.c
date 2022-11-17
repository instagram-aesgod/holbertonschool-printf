#include "main.h"
/**
 * printf_char - funtion that print char.
 * @list: arguments.
 * Return: 0.
 */

int printf_char(va_list list)
{
	int arg = va_arg(list, int);

	_putchar(arg);
	return (1);
}

/**
 * printf_str - funtion that print str.
 * @list: arguments.
 * Return: 0.
 */

int printf_str(va_list list)
{
	int i;
	char *ptr = va_arg(list, char *);
	char *ptrNULL = "(null)";

	if (ptr == NULL)
		for (i = 0; ptrNULL[i] != '\0'; i++)
			_putchar(ptrNULL[i]);
	else
		for (i = 0; ptr[i] != '\0'; i++)
			_putchar(ptr[i]);

	return (i);
}

/**
 * printf_percent - function that prints %
 * @list: arguments.
 * Return: 0.
 */

int printf_percent(va_list list)
{
	(void)list;
	_putchar('%');
	return (1);
}
