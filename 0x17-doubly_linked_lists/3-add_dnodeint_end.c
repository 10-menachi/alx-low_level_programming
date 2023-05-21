#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the end of a doubly linked list
 * @head: head of the given list
 * @n: data of the given node
 *
 * Return: pointer to the new node, NULL if process fails
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));
	dlistint_t *current = *head;

	if (!temp)
		return (NULL);
	temp->n = n;
	temp->next = NULL;

	if (*head)
	{
		while (current->next)
			current = current->next;
		current->next = temp;
		temp->prev = current;
	}
	else
	{
		temp->prev = NULL;
		*head = temp;
	}

	return (temp);

}
