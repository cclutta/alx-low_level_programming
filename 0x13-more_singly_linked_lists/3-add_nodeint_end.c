#include "lists.h"

/**
* add_nodeint_end - that adds a new node
* @head: list_t
* @n: int
*
* Return: listint_t
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *last;

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!*head)
	{
		*head = new;
	}
	else
	{
		last = *head;

		while (last->next != NULL)
			last = last->next;

		last->next = new;
	}
	return (new);

}
