#include "lists.h"

/**
* add_node - that adds a new node
* @head: list_t
* @str: string
*
* Return: list_t
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	unsigned int len = 0;

	if (!new)
		return (NULL);


	new->n = n;
	new->next = *head;

	*head = new;

	return (new);

}
