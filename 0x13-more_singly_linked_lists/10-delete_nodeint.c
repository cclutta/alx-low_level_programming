#include "lists.h"

/**
* delete_nodeint_at_index - delete node at
* @head: head of list
* @index: index of node
*
* Return: int
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *next;
	unsigned int res;
	
	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	current = *head;
	for (res = 0; res < index - 1; res++)
	{
		if (current->next == NULL)
			return (-1);
		current = current->next;
	}
	next = current->next;
	current->next = next->next;
	free(next);
	return (1);

	
}
