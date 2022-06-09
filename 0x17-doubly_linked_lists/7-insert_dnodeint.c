#include "lists.h"

/**
* dlistint_len -  returns the number of elements
* @h: head
*
* Return: size_t
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}

/**
* insert_dnodeint_at_index - add new node at index
* @h: node
* @idx: index
* @n: int
*
* Return: new node
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL;
	dlistint_t *current = *h;
	size_t len = dlistint_len(*h);

	if (h)
	{
		if (idx == 0)
		{
			return (add_dnodeint(h, n));
		}
		if (idx == len)
		{
			return (add_dnodeint_end(h, n));
		}
		new = malloc(sizeof(dlistint_t));

		if (new)
		{
			new->n = n;
			while (idx--)
			{
				current = current->next;
			}
			new->prev = current->prev;
			new->next = current;
			current->prev->next = new;
			current->prev = new;
		}
	}
	return (new);
}
