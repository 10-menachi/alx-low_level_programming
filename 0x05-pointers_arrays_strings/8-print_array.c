#include "main.h"
/**
 * print_array - prints n elements of
 * an array of integers
 * @a: the array
 * @n: the number of elements
 *
 * Return: void (no return type)
 */
void print_array(int *a, int n)
{
	if (n > 0)
	{
		int i = 0;

		while (n > i)
		{
			if (i != n - 1)
			{
				_putchar(a[i]);
				_putchar(',');
				_putchar(' ');
				i++;
			}
			else
			{
				_putchar(a[i]);
				i++;
			}
		}
	}
	_putchar('\n');
}
