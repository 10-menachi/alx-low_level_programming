#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a
 * listint_t list
 * @head: head of the list
 * @n: data
 *
 * Return: pointer to the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *current;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!*head)
		*head = new;
	else
	{
		current = *head;
		while (current->next)
		{
			current = current->next;
		}
		current->next = new;
	}
	return (new);
}
