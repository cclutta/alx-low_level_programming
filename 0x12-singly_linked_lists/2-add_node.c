#include "lists.h"

/**
* add_node - that adds a new node
* @head: list_t
* @str: string
*
* Return: list_t
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	unsigned int len = 0;
	
	if (!new)
		return (NULL);
	
	while (str[len])
		len++;
	

	new->str = strdup(str);
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);

}
