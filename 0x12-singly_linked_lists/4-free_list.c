#include "lists.h"

/**
* free_listint - that frees a listint_t list
* @head: listint_t
*
* Return: void
*/
void free_listint(listint_t *head)
{
	listint_t *t;

	while (head)
	{
		t = head->next;
		free(head);
		head = t;
	}
}
