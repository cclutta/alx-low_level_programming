#include "lists.h"

/**
* sum_dlistint -  returns the sum of elements
* @h: head
*
* Return: int
*/
int sum_dlistint(dlistint_t *head)
{
	int i = 0;

	while (head)
	{
		i += head->n
		head = head->next;
	}
	return (i);
}
