#include "lists.h"

/**
 * sum_listint - return the sum of all data
 * in the linked list
 * @head: head of the linked list
 *
 * Return: sum of all items in the linked
 * list, 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
