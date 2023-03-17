#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: given memory block
 * @old_size: old size
 * @new_size: new size
 * Return: pointer to new memory block, NULL if process fails
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	int s;

	if (new_size == old_size)
		return (ptr);
	if (!ptr)
		return (malloc(new_size));
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
		s = old_size;
	else
		s = new_size;
	new_ptr = malloc(new_size);
	memcpy(new_ptr, ptr, s);
	free(ptr);
	return (new_ptr);
}
