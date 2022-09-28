#include "main.h"
/**
 * _puts_recursion - prints a string
 * followed by a new line
 * @s: the string to be printed
 *
 * Return: void (No return value)
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (*(s + i) == '\0')
		_putchar('\n');
		return;
	_puts_recursion(*(s + i));
	i++;
}
