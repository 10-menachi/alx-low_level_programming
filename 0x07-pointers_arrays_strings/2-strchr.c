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
	void *st;
	unsigned int i = 0;

	while (*(s + i) != '\0')
	{
		if (c == *(s + i))
		{
			return (s + i);
		}
	}
	if (*(s + i) == c)
	{
		return (s + i);
	}
	else
	{
		return ('\0');
	}
}
