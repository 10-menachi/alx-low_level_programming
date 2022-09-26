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
	unsigned int i = 0;
	char *ptr = s;

	while (*(ptr + i) >= '\0')
	{
		if (*(ptr + i) == c)
		{
			return (ptr + i);
		}
		i++;
	}
	return ('\0');
}
