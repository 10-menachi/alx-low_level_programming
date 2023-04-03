#include "lists.h"

/**
 * print_listint - prints all elements of a listint_t list
 * @h: head of given list
 *
 * Return: number of elements printed
 */

size_t print_listint(const listint_t *h)
{
	size_t elements = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		elements++;
	}

	return (elements);
}
