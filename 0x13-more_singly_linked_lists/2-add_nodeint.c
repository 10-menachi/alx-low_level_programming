#include "lists.h"

/**
 * add_nodeint - adds a node at the beginning
 * of a listint_t list
 * @head: head of the given list
 * @n: data to be stored
 *
 * Return: address of added node, NULL if process fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = NULL;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
