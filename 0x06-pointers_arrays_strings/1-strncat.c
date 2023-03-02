#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination
 * @src: source
 * @n: number of bytes to be concatenated
 *
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, index = 0;

	while (dest[index])
		index++;
	for (i = 0; i < n; i++)
	{
		dest[i] = *(src);
		i++;
		src++;
	}
	return (dest);
}
