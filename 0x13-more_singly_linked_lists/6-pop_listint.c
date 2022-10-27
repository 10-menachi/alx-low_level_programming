#include "lists.h"

/**
 * pop_listint - deletes the head node of
 * a listint_t list
 * @head: double pointer to head
 *
 * Return: data of the deleted node head
 *
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int content;

	if (*head == NULL)
		return (0);
	temp = *head;
	content = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (content);
}

