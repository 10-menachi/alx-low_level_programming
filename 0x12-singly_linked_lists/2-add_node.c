#include "lists.h"

/**
 * add_node - adds a new node at the
 * beginning of a list_t list
 * @head: pointer to first node
 * @str: new node
 *
 * Return: address of new element, NULL if process failed
 */

list_t *add_node(list_t **head, const char *str)
{
	char *duplicate;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	duplicate = strdup(str);
	if (duplicate == NULL)
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
	new->next = *head;
	*head = new;

	return (new);
}
