#include "lists.h"

/**
* free_list - that frees a list_t list
* @head: list_t
*
* Return: void
*/
void free_list(list_t *head)
{
	list_t *t;
	
	while (head)
	{
		t = head;
		head = head->next;
		free(head->str);
		free(t);
	}
}
