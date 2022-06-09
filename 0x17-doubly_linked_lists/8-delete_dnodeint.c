#include "lists.h"

/**
* delete_dnodeint_at_index - delete node at index
* @head: node
* @index: index
*
* Return: 1 or -1
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current;
	dlistint_t *to_delete = *head;

	if (*head && head)
	{
		if (index == 0)
		{
			current = *head;
			*head = (*head)->next;
			if (*head)
				(*head)->prev = NULL;
			free(current);
		}
		else
		{
			while (i != index && to_delete)
			{
				current = to_delete;
				to_delete = current->next;
				i++;
			}
			if (i == index && to_delete)
			{
				current->next = to_delete->next;
				if (to_delete->next)
					to_delete->next->prev = current;
				free(to_delete);
			}
			else
				return (-1);
		}
		return (1);
	}
	return (-1);
}
