#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: head of the given linked list
 */

void free_dlistint(dlistint_t *head)
{
	while (head)
	{
		free(head);
		head = head->next;
	}
}
