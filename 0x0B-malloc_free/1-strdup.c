#include "main.h"

/**
 * _strdup - duplicates a string
 * @str: given string
 *
 * Return: pointer to duplicate
 * string, NULL if process fails
 */

char *_strdup(char *str)
{
	int i = 0;
	char *dup;

	dup = malloc(sizeof(str));
	if (dup == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		dup[i] = str[i];
		i++;
	}
	return (dup);
}
