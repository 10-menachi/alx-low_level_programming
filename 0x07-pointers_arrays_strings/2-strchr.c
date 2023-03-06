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

	while (*(s + i) >= '\0')
	{
		if (*(s + i) == c)
			return (s + i);
		i++;
	}
	return ('\0');
}
