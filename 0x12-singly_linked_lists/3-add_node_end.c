#include "lists.h"

/**
 * add_node_end - adds a node at the end of a linked list
 * @head: head of the list
 * @str: node data
 *
 * Return: pointer to the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	list_t *tail, *temp;
	int len = 0;

	tail = malloc(sizeof(list_t));

	if (!tail)
		return (NULL);
	dup = strdup(str);
	if (!dup)
	{
		free(tail);
		return (NULL);
	}
	while (*head)
	{
		temp = *head;
		head = &(*head)->next;
	}
	while (str[len])
		len++;

	temp->next = tail;
	tail->str = dup;
	tail->len = len;
	tail->next = NULL;

	return (*head);
}
