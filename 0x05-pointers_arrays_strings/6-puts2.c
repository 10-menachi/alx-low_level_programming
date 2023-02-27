#include "main.h"

/**
 * puts2 - prints every other character
 * of a string followed by a new line
 * @str: given string
 */

void puts2(char *str)
{
	int i, len = 0;

	while (*str++)
		len++;
	for (i = 0; i < len; i += 2)
		_putchar(str[i]);
	_putchar(10);
}
