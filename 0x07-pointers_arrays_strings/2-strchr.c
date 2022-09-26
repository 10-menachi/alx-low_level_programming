#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: provided string
 * @c: character to be found
 *
 * Return: first occurrence of the character
 * NULL if not found
 */
char *_strchr(char *s, char c)
{
	while (s != '\0')
	{
		if (c == s)
		{
			return (c);
		}
	}
	return (NULL);
}
