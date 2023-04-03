#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: head of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
