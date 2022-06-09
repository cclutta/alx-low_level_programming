#include "lists.h"

/**
* free_dlistint - frees dlistint_t list
* @head: node
*
* Return: new node
*/

void free_dlistint(dlistint_t *head)
{
	while (head)
	{
		head = head->next;
		free (head);
		
	}
}
