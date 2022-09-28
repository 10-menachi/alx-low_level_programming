#include "main.h"
/**
 * _print_rev_recursion - prints a string
 * in reverse, followed by a new line
 * @s: the string to be printed
 *
 * Return: void (no return type)
 */
void _print_rev_recursion(char *s)
{
	while (*s)
	{
		s += 1;
	}
	if (*s)
	{
		_putchar(*s);
		_print_rev_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
