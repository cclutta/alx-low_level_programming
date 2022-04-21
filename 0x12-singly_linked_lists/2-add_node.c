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
	
	new->str = str;
	
	new->next = *head;
	
	*head = new;
 
}
