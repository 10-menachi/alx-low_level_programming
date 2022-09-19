#include "main.h"
/**
 * print_rev - prints a string in reverse
 * followed by a new line
 *
 * @s: the string to be printed in reverse
 *
 * Return: void (no return value)
 */
void print_rev(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}

	while (*s != '\0')
	{
		s--;
		_putchar(*s);
		i--;
	}
}
