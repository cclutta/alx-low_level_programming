#include "lists.h"

/**
* get_nodeint_at_index - get node at index
* @head: listint_t
*
* Return: int
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int len;
	
	if (head == NULL)
		return (NULL);
	
	for (len = 0; len < index; len++)
	{
		head = head->next;
		
		if (!head)
			return (NULL);
	}
	
		
		return (head);
	
}
