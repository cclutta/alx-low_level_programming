#include "lists.h"

/**
* add_nodeint - that adds a new node
* @head: list_t
* @n: int
*
* Return: listint_t
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);


	new->n = n;
	new->next = *head;

	*head = new;

	return (new);

}
