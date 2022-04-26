#include "lists.h"

/**
* pop_listint - that pops
* @head: listint_t
*
* Return: int
*/
int pop_listint(listint_t **head)
{
	listint_t *t;
	int n = (*head)->n;

	while (*head)
	{
		t = (*head)->next;
		*head = t;
	}
	return (n);
}
