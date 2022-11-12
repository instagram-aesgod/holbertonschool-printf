#include <unistd.h>

/**
 * _putchar - write a character from c to stdout
 *@c: Is the character to print
 *
 *Return: On success 1
 *If a error comes out, -1 is returned/ errno is correctly set
 */

int _putchar(char c)
{
	return (buffer(c));
}
