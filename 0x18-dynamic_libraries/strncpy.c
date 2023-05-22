#include "main.h"
#include <string.h>

/**
 * _strncpy - copy a string.
 * @n: number of bytes to copy
 * @dest: destination string
 * @src: source string
 * Return: a pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
