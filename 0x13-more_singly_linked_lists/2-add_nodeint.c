#include "lists.h"

/**
* add_node - that adds a new node
* @head: list_t
* @str: string
*
* Return: list_t
*/
list_t *add_nodeint(list_t **head, const int n)
{
	list_t *new = malloc(sizeof(list_t));
	unsigned int len = 0;

	if (!new)
		return (NULL);


	new->n = n;
	new->next = *head;

	*head = new;

	return (new);

}
