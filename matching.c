#include "main.h"
/**
 * printf_function - funtion choose.
 * @c: pointer char type
 * Return: 0.
 */
int (*printf_function(char c))(va_list list)
{
	int j;
	strct form[] = {
		{"c", printf_char},
		{"s", printf_str},
		{"%", printf_percent},
		{"d", printf_d_i},
		{"i", printf_d_i},
		{NULL, NULL}
	};
	for (j = 0; *form[j].p_str != '\0'; j++)
	{
		if (form[j].p_str[0] == c)
			return (form[j].f);
	}
	return (NULL);
}
