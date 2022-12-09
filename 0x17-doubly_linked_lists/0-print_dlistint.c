#include "lists.h"

/**
 * print_dlistint - prints the elements of a dlistint_t
 *
 * @h: pointer to the dlistint_t
 *
 * Return: the number of nodes
 *
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		printf("%d\n", h->n);
		h = h->next
	}
	return (num);
}
