#include "main.h"

/**
 * print_alphabet - prints the alphabet
 * in lower case followed by a new line
 *
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar(10);
}
