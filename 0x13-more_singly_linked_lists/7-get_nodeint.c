#include "lists.h"

/**
* get_nodeint_at_index - get node at index
* @head: listint_t
*
* Return: int
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *t, *node;
	unsigned int len = 0;
	
	if (head == NULL)
		return (NULL);
	
	while (head)
	{
		t = head->next;
		len++;
		
		if (len == index)
		{
			node = t;
			
			if (node == NULL)
				return (NULL);
		}
		
	}
		
		return (node);
	
}
