#include "main.h"

/**
 * _strlen - returns the length
 * of a given string
 * @s: given string
 *
 * Return: length of the given
 * string
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
	{
		length++;
	}
	return (length);
}

/**
 * print_rev - prints a string in reverse
 * followed by a new line
 * @s: given string
 */

void print_rev(char *s)
{
	int len = _strlen(s);

	while ((len) >= 0)
	{
		len--;
		_putchar(*(s + len));
	}
	_putchar(10);
}
