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
	int i = 0, j = 0, size1 = 0, size2 = 0, sizecat;
	char *cat;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	while (s1 && s1[i])
	{
		size1++;
		i++;
	}
	while (s2 && s2[j])
	{
		size2++;
		j++;
	}
	sizecat = size1 + size2;
	cat = malloc(sizeof(char) * (sizecat + 1));
	if (cat == NULL)
		return (NULL);

	i = 0;
	j = 0;

	while (s1 && s1[i])
	{
		cat[i] = s1[i];
		i++;
	}
	while (s2 && s2[j])
	{
		cat[i] = s2[j];
		i++;
		j++;
	}

	cat[sizecat] = '\0';

	return (cat);


}
