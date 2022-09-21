#include "main.h"
/**
 * _strncat - concantenates two strings
 * @dest: first string
 * @src: second string
 * @n: number of bytes
 *
 * Return: the result of the concantenation
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j = 0;

	while (i < 1000)
	{
		if (dest[i] == '\0')
		{
			break;
		}
		m++;
		i++;
	}

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[m + i] = '\0';
	return (dest);
}
