#include "main.h"
/**
 * print_most_numbers - prints numbers between 0 and 9, excluding 2 and 4
 *
 * Return: void (No return type)
 */
void print_most_numbers(void)
{
	int i = 48;

	while (i <= 57)
	{
		if (i == 2 || i == 4)
		{
			i++;
		}
		else
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
	}
}
