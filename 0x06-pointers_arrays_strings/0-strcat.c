#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination
 * @src: source
 *
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int index = 0;

	while (dest[index])
		index++;
	while (src)
	{
		dest[index] = *(src);
		index++;
		src++;
	}
	return (dest);
}
