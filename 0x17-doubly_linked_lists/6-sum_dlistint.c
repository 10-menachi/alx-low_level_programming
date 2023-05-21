#include "lists.h"

/**
 * sum_dlistint - computes the sum of all data of a linked list
 * @head: head of the given list
 *
 * Return: all of the data in the given list
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
