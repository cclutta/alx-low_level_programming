#include "lists.h"

/**
* free_listint2 - that frees a listint_t list
* @head: listint_t
*
* Return: void
*/
void free_listint2(listint_t **head)
{
	listint_t *t;
	
	if (head == NULL)
		return;

	while (*head)
	{
		t = (*head)->next;
		free(*head);
		*head = t;
	}
  
  
}
