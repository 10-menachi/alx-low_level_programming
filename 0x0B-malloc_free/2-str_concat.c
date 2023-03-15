#include "main.h"

/**
 * str_concat - concatentes two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to concatenated string,
 * NULL if process fails
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, size1, size2, sizecat;
	char *cat;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		size1++;
	for (j = 0; s2[j]; j++)
		size2++;
	sizecat = size1 + size2
	cat = malloc(sizeof(char) * (sizecat + 1));

	if (cat == NULL)
		return (NULL);

	i = 0;
	j = 0;

	while (s1[i])
	{
		cat[i] = s1[i];
		i++;
	}
	while (s2[i])
	{
		cat[i] = s2[j];
		i++;
		j++;
	}

	return (cat);


}
