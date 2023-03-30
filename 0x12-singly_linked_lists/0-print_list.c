#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: given list
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int elements = 0;

	while (h != NULL)
	{
		printf("%s", h->str);
		h = h->next;
		elements++;
	}

	return (elements);
}
