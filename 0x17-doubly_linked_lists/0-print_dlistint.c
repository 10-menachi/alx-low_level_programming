#include "main.h"

/**
 * print_dlistint - prints all nodes of a doubly linked list
 * @h: given list
 *
 * Return: number of nodes printed
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t elements = 0;

	while (h)
	{
		printf("%d\n", h->n);
		elements++;
		h = h->next;
	}
}
