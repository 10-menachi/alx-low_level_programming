#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a hash table
 * @size: size of the hash table
 *
 * Return: pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash;
	unsigned long int i;

	hash = malloc(sizeof(hash_table_t));
	if (!hash)
		return (NULL);
	hash->size = size;
	hash->array = malloc(sizeof(hash_node_t *) * size);
	if (!hash->array)
	{
		free(hash);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		hash->array[i] = NULL;

	return (hash);
}
