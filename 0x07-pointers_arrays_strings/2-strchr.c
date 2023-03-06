#include "main.h"

/**
 * _strchr - checks for a character in a string
 * @s: given string
 * @c: given character
 *
 * Return: first occurrence of the character if
 * found, NULL otherwise
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (*s)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	return (NULL);
}
