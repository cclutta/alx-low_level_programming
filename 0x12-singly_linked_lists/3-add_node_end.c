#include "lists.h"

/**
* add_node_end - that adds a new node
* @head: list_t
* @str: string
*
* Return: list_t
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	list_t *last = *head;
	unsigned int len = 0;

	if (!new)
		return (NULL);

	while (str[len])
		len++;


	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (!*head)
	{
		*head = new;
	}

	while (last->next != NULL)
		last = last->next;

	last->next = new;

	return (new);

}
