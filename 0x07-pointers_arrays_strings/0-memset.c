#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: memory area
 * @b: the byte
 * @n: number of bytes
 *
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
		b++;
	}
	return (s);
}