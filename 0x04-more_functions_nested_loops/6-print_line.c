#include "main.h"

/**
 * print_line - prints a straight line
 * @n: specifies the length of the line
 * Return: void (No return value)
 */

void print_line(int n)
{
	if (n > 0)
	{
		for (int i = 0; i <= n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
