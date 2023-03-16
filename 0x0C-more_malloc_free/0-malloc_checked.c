#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of butes
 * Return: NULL if process fails, pointer to
 * allocated memory otherwise
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (!ptr)
	{
		exit(98);
		return (NULL);
	}
	return (ptr);

}
