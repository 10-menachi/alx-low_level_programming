#include "main.h"
/**
 * _strcpy - copies a string to a buffer
 * @dest: the buffer that the string ends up
 * @src: the string to be copied
 *
 * Return: the pointer to dest
 */
void *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];

	return (dest);
}
