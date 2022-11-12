#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @str: The string to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void _putcharstr(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
}
