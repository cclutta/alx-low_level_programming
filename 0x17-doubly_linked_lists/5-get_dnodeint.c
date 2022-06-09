#include "lists.h"

/**
* get_dnodeint_at_index - frees dlistint_t list
* @head: node
* @index: index
* Return: new node
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

	unsigned int i = 0;

	while (head && i != index)
	{
		head = head->next;
		i++;
	}
	if (i == index && head)
		return (head);
	return (NULL);
}
