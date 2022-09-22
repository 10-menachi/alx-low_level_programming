#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: 0 if they are equal,
 *  any other integer otherwise
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int equal = 0;

	while (equal = 0)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
		{
			break;
		}
		else
		{
			equal = s1[i] - s2[i];
			i++;
		}
	}

	return (equal);
}
