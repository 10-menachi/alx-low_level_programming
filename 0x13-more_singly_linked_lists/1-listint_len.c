#include "lists.h"

/**
 * listint_len - calculates the length of a listint_t
 * @h: head of the given listint_t
 *
 * Return: length of @h
 */

size_t listint_len(const listint_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}
