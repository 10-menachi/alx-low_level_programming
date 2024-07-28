#include "hash_tables.h"

/**
 * hash_table_print - This function prints a hash table
 * @ht: Hash table to be printed
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	int first = 1;
	unsigned long int i;

	if (!ht)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];

		while (node)
		{
			if (!first)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			first = 0;
			node = node->next;
		}
	}
	printf("}\n");
}
