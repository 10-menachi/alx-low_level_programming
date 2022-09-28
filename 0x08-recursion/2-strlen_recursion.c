#include "main.h"
/**
 * _strlen_recursion - returns the length
 * of a strng
 * @s: given string
 *
 * Return: the length of a string
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);
	}
	return (i);
}
