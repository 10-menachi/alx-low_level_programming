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

	temp = malloc(sizeof(list_t));

	if (!temp)
		return (NULL);
	dup = strdup(str);
	if (!dup)
	{
		free(temp);
		return (NULL);
	}
	while (str[len])
		len++;
	temp->str = dup;
	temp->len = len;
	temp->next = NULL;

	if (*head == NULL)
		*head = temp;
	else
	{
		tail = *head;
		while (tail->next)
			tail = tail->next;
		tail->next = temp;
	}

	return (*head);
}
