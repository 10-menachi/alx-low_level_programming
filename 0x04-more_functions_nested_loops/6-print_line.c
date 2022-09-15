#include "main.h"
/**
 * print_line - prints a straight line
 * @n: specifies the length of the line
 * Return: void (No return value)
 */
void print_line(int n)
{
	int i = 0;
	
	if (n <= 0)
	{
		_putchar('0');
	}
	else
	{
		while (i <= n)
		{
			_putchar('_');
			i++;
		}
	}
	_putchar('\n');
}
