#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * of a list_t list
 * @head: pointer to the first node
 * @str: the new node
 *
 * Return: the address of the new element,
 * NULL if the process failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *duplicate;
	int len;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	duplicate = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}
	len = 0;
	while (str[len])
	{
		len++;
	}
	new->str = duplicate;
	new->len = len;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new;
	}
	return (*head);
}
