#include "lists.h"

/**
 * dlistint_len - finds the number of elements in a linked list
 * @h: given list
 *
 * Return: length of @h
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		if (h->n)
			elements++;
		h = h->next;
	}
	return (elements);
}
