#include "main.h"

/**
 * _printf - function that print the string
 * @format: stock the type of char
 * Return: count.
 */
int _printf(const char *format, ...)
{
	va_list arg;
	char *x;
	char tmp []="%";
	int i = 0, j = 0, count = 0;
	form typ[] = {
		{"c", printf_c},
		{"s", printf_s},
		{"%", printf_percent},
		{NULL, NULL}
	};

	x = &tmp;
	va_start(arg, format);
	if (format == NULL)
		return (-1);
	while (format && format[j])
	{
		if (format[j] == *x)
		{
			j++;
			while (typ[i].type)
			{
				if (*(typ[i].type) == format[j])
				{
					typ[i].f(arg, &count);
				}
				i++;
			}
			j++;
		}
		count++;
		_putchar(format[j]);
		j++;
	}
	va_end(arg);
	return (count);
}
