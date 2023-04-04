#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t list
 * @head: head of the given list
 *
 * Return: data in @head
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;


	if (!*head || !head)
		return (0);

	temp = *head;
	*head = (*head)->next;
	n = temp->n;
	free(temp);


	return (n);

}
