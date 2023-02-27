#include "main.h"

/**
 * _puts - prints a string followed
 * by a new line
 * @str: given string
 */

void _puts(char *str)
{
	int i = 0;

	while (*str++)
	{
		_putchar((int) *(str + i));
		i++;
	}
}
