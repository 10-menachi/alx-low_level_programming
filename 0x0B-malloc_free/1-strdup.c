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
	int size, i;
	char *dup;

	size = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		size++;

	dup = malloc(sizeof(char) * size + 1);
	if (dup == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
	{
		dup[i] = str[i];
		i++;
	}
	return (dup);
}
