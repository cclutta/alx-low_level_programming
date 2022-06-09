#include "lists.h"

/**
* free_dlistint - frees dlistint_t list
* @head: node
*
* Return: new node
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	while (head)
	{
		current = head;
		head = head->next;
		free (current);
		
	}
}
