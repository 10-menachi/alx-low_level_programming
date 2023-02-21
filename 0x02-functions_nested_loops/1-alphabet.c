#include <main.h>

/**
 * print_alphabet - prints the alphabet
 * in lower case followed by a new line
 *
 */

void print_alphabet(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar(10);
}
