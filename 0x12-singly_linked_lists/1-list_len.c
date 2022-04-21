#include "lists.h"

/**
* list_len - that prints all the elements of a list_t list.
* @h: list_t
*
* Return: size_t
*/
size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);

}
