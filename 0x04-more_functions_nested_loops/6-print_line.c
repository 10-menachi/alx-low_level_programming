#include "main.h"

/**
 * print_line - prints a straight line
 * @n: length of the line
 */

void print_line(int n)
{
	int ch;

	for (ch = 0; ch < n; ch++)
	{
		_putchar(ch);
	}
	_putchar(10);
}
