#include "lists.h"

/**
* add_dnodeint - add new node at the beginning
* @head: node
* @n: int
*
* Return: new node
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (new)
	{
		new->n = n;
		new->prev = NULL;

		if (*head)
		{
			(*head)->prev = new;
		}
		new->next = *head;
		*head = new;
	}
	else
	{
		return (NULL);
	}
	return (new);
}
