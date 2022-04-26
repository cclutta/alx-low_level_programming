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
	int n;

	if (*head == NULL)
		return (0);

	t = *head;
	*head = t->next;
	n = t->n;

	free(t);

	return (n);
}
