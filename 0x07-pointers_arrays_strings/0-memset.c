#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: memory location to be filled
 * @b: the constant byte
 * @n: the number of bytes to be filled
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (*s);
}
