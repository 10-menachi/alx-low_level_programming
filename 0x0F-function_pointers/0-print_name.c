#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name to be printed
 * @f: function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	while (*name != '\0')
	{
		f(name);
		name++;
	}
}

/**
 * print_char - prints a character
 * @c: character to be printed
 */

void print_char(char *c)
{
	putchar(*c);
}
