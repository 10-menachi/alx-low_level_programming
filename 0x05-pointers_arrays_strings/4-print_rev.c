#include "main.h"

/**
 * print_rev - prints a string in reverse
 * followed by a new line
 * @s: given string
 */

void print_rev(char *s)
{
	while (*s)
		*s++;
	while (*s)
		_putchar(*s++);
	_putchar(10);
}
