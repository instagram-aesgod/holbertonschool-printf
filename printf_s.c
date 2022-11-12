#include "main.h"

/**
* printf_s - function that print a string
* @arg: arg
* @count: size of arg
*/
void printf_s(va_list arg, int *count)
{
	char *str;
	int length = 0;

	str = va_arg(arg, char *);
	while (*(str + length) != '\0')
	{
		length++;
	}
	*count += length;
	if (str == NULL)
		return;
	_putcharstr(str);
}
