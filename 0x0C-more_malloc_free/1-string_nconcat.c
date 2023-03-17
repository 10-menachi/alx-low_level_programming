#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from s2
 * Return: pointer to concatenated string,
 * NULL if process fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	void *cat_string;
	char *st;
	unsigned int size_cat, size1 = 0, size2 = 0, i = 0, j = 0;

	while (s1[i] != '\0')
	{
		size1++;
		i++;
	}
	while (s2[j] != '\0')
	{
		size2++;
		j++;
	}
	if (n >= size2)
		n = size2;
	size2 = n;
	size_cat = size1 + size2;
	cat_string = malloc(size_cat + 1);
	if (!cat_string)
		return (NULL);
	st = (char *) cat_string;
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		st[i] = s1[i];
		i++;
	}
	while (j < n)
	{
		st[i] = s2[j];
		i++;
		j++;
	}
	st[size_cat] = '\0';
	return (st);
}
