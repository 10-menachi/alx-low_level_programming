#include "stdlib.h"
#include "main.h"

/**
 * _strdup - returns a pointer to a newly
 * allocated space in memory
 * @str: given string
 *
 * Return: pointer to new space, NULL
 * if str is null
 */

char *_strdup(char *str)
{
	char *ptr;
	int i;
	int j = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		i = 0;
		while (str[i])
		{
			j++;
			i++;
		}
		ptr = malloc(sizeof(char) * (j + 1));
		if (ptr == NULL)
		{
			return (NULL);
		}
		else
		{
			while (str[i])
			{
				ptr[i] = str[i];
				i++;
			}
			ptr[j] = '\0';

			return (ptr);
		}
	}
}
