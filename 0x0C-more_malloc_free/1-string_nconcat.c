#include "main.h"
#include "stdlib.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 *
 * Return: pointer to the concantenated string, null if
 * program fails
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cont;
	unsigned int len = n, i = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[i])
	{
		len++;
		i++;
	}
	cont = malloc(sizeof(char) * (len + 1));
	if (cont == NULL)
	{
		return (NULL);
	}
	len = 0;
	i = 0;
	while (s1[i])
	{
		cont[len++] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i] && i < n)
	{
		cont[len++] = s2[i];
		i++;
	}
	cont[len] = '\0';
	return (cont);
}
