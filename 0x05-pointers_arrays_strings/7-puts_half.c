#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: given string
 */

void puts_half(char *str)
{
	int i, len = 0;

	while (*str++)
		len++;
	if (len % 2 == 0)
	{
		for (i = 0; i < len / 2; i++)
			_putchar(str[i]);
	}
	else
	{
		for (i = len / 2; i < len; i++)
			_putchar(str[i]);
	}
	_putchar(10);
}

