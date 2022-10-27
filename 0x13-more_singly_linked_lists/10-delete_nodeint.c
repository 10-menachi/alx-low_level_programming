#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a given
 * position
 * @head: head of the list
 * @index: position to the to be deleted node
 * 
 * Return: 1 if process is successful, -1
 * if process fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp, *tempor;

	if (*head == NULL)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return 1;
	}
	while (i < index - 1 && temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	if (i != index - 1 || temp->next == NULL)
		return (-1);
	tempor = temp->next;
	temp->next = (temp->next)->next;
	free(tempor);
	return (1);
}
