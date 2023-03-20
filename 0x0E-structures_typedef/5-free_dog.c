#include "dog.h"

/**
 * free_dog - frees dogs
 * @d: given dog
 */

void free_dog(dog_t *d)
{
	if (d)
		free(d);
}
