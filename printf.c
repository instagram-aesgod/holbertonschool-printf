#include "main.h"
/**
 * _printf - funtion that print.
 * @format: const char type.
 * Return: Number of digits.
 */
int _printf(const char *format, ...)
{
	va_list list;
	int count = 0, i = -1;
	int (*z)(va_list);

	va_start(list, format);

	if (format != NULL)
	{
		i = 0;
		for (; format[count] != '\0'; i++, count++)
		{
			if (format[count] != '%')
				_putchar(format[count]);
			else if (format[count] == '%' && format[count + 1] == '\0')
			{
				return (-1);
			}
			else if (format[count] == '%' && format[count + 1] != '\0')
			{
				z = printf_function(format[count + 1]);
				if (z == NULL)
					_putchar(format[count]);
				else
				{
					i = (i + z(list)) - 1;
					count++;
				}
			}
		}
	}
	else
		return (-1);
	va_end(list);
	return (i);
}
