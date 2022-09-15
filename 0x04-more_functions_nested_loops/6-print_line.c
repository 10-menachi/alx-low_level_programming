#include "main.h"
/**
 * print_line - prints a straight line
 * @n: specifies the length of the line
 * Return: void (No return value)
 */
void print_line(int n)
{
	int i = 0;
	
	while (i <= n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
