#include "lists.h"

/**
 * add_dnodeint - adds a node at the beginning of a linked list
 * @head: pointer to the head of a linked list
 * n: data of the node
 *
 * Return: head of the linked list, NULL if process fails
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	if (!temp)
		return (NULL);

	temp->n = n;
	temp->prev = NULL;
	temp->next = *head;

	if (*head)
		(*head)->prev = temp;
	*head = temp;
	return (temp);
}
