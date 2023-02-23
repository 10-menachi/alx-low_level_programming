#include "main.h"

/**
 * print_diagonal - prints a straight line
 * @n: length of the line
 */

void print_diagonal(int n)
{
	int ch, chh;

	for (ch = 0; ch < n; ch++)
	{
		for (chh = 0; chh < ch; chh++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		if (ch == n - 1)
			continue;
		_putchar(10);
	}
	_putchar(10);
}

