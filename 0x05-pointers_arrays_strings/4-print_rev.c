#include "main.h"

/**
 * print_rev - prints a string in reverse
 * followed by a new line
 * @s: given string
 */

void print_rev(char *s)
{
	int len = _strlen(s);

	while ((len -1) >= 0)
	{
		_putchar(*(s + len));
		len--;
	}
	_putchar(10);
}
