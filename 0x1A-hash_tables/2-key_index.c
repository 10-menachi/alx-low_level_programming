#include "hash_tables.h"

/**
 * key_index - returns the index of a given key
 * @key: given key
 * @size: size of the array
 *
 * Return: Index at which the key is found
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int value, idx;

	value = hash_djb2(key);
	idx = value % size;

	return idx;
}
