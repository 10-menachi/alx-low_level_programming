#include "main.h"
#include "stdlib.h"

/**
 * _realloc - reallocates a memory block
 * @ptr: previously allocated memory
 * @old_size: old size of allocated memory
 * @new_size: new size of allocated memory
 *
 * Return: pointer to reallocaed memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *mem;
	char *ptr_cpy, *fill;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		mem = malloc(new_size);
		if (mem == NULL)
		{
			return (NULL);
		}
		else
		{
			return (mem);
		}
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr_cpy = ptr;
	mem = malloc(sizeof(*ptr_cpy) * new_size);
	if (mem == NULL)
	{
		free(ptr);
		return (NULL);
	}
	fill = mem;
	i = 0;
	while (i < old_size && i < new_size)
	{
		fill[i] = *ptr_cpy++;
		i++;
	}
	free(ptr);
	return (mem);
}
