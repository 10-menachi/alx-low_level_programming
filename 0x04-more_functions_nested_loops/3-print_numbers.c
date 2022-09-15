#include "main.h"
/**
 * print_numbers - prints numbers from 0 to 9
 *
 * Return: void (No return type)
 */
void print_numbers(void)
{
	int ch = 48;

	while (ch <= 57)
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
