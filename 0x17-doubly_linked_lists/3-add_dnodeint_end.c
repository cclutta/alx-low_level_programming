#include "lists.h"

/**
* add_dnodeint_end - add new node at the beginning
* @head: node
* @n: int
*
* Return: new node
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;
	dlistint_t *current = *head;

	new = malloc(sizeof(dlistint_t));

	if (new)
	{
		new->n = n;
		new->next = NULL;
        new->prev = NULL;

		if (!(*head))
		{
			*head = new;
		}
        else
        {
            while (current->next)
                current = current->next;
            current->next = new;
            new->prev = current;
        }
	}
	return (new);
}
