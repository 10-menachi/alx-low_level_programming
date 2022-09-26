#include "main.h"

/**
 * _strpbrk - searches a string for
 * any set of bytes
 * @s: string to be searched for
 * @accept: string to search in
 *
 * Return: pointer to found byte, or
 * null if not found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		i = 0;

		while (*(accept + i))
		{
			if (*s == *(accept + i))
			{
				return (s);
			}
			i++;
		}

		s++;
	}

	return ('\0');
}
