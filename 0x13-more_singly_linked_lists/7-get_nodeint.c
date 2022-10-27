#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth
 * node of a listint_T linked list
 * @head: head of given list
 * @index: the node to be returned
 *
 * Return: node at given index, NULL if
 * process fails
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (i < index && head != NULL)
	{
		head = head->next;
		i++;
	}
	if (i == index)
		return (head);
	return (NULL);
}
