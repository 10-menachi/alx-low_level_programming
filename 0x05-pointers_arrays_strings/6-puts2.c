#include "main.h"

/**
 * puts2 - prints every other character
 * of a string followed by a new line
 * @str: given string
 */

void puts2(char *str)
{
	int i = 0;

	while (*str++)
	{
		if (i % 2 == 0)
		{
			_putchar(*(str + i));
		}
		i++;
	}
	_putchar(10);
}
