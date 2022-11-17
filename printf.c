#include "main.h"
/**
* _printf - function that prints based on format specifier
* @format: takes in format specifier
* Return: return pointer to index
*/
int _printf(const char *format, ...)
{
	va_list valist;
	int count;
	format_t get_opt[] = {
		{"c", set_char},
		{"s", set_string},
		{"i", set_decimal},
		{"d", set_decimal},
		{"%", print_percent},
		{NULL, NULL}
	};

	if (!format)
	{
		return (-1);
	}

	va_start(valist, format);
	count = parse_format(format, get_opt, valist);
	va_end(valist);


	return (count);
}
