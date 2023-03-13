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
	int i = 0;
	int j = 0;

	while (*(dest + i))
	{
		i++;
	}
	while ((src + j < src + n) && *(src + j) != '\0')
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	return (dest);
}
