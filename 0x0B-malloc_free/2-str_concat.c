#include "stdlib.h"
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to concatnated string,
 * null if process fails
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	int i;
	int j = 0;
	int k = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	else if (s2 == NULL)
	{
		s2 = "";
	}
	else
	{
		i = 0;
		while (s1[i] || s2[i])
		{
			j++;
			i++;
		}
		s3 = malloc(sizeof(char) * j);

		if (s3 == NULL)
		{
			return (NULL);
		}
		else
		{
			i = 0;
			while (s1[i])
			{
				s3[k++] = s1[i];
				i++;
			}
			i = 0;
			while (s2[i])
			{
				s3[k++] = s2[i];
				i++;
			}
		}
	}
	return (s3);
}
