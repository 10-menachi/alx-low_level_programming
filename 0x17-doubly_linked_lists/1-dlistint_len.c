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

	if (!h)
		return (0);
	while (h)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
