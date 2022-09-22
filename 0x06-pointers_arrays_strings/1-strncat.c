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
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (j < n)
	{
		dest[i] = src[j];
		if (src[j] == '\0')
		{
			break;
		}
		else
		{
			i++;
			j++;
		}
	}
	return (dest);
}
