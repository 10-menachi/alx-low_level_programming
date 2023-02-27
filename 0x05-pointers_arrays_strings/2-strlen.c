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
