#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: given string
 * @accept: prefix
 *
 * Return: number of bytes in @s which contains only
 * the bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int j;

	while (*s)
	{
		j = 0;
		while (accept[j])
		{
			if (*s == accept[j])
			{
				i++;
				break;
			}
			else if (accept[j + 1] == '\0')
			{
				return (i);
			}
			j++;
		}
	}
	return (i);
}
