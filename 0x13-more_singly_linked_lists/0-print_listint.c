#include "lists.h"

/**
* print_listint - prints all the elements of a listint_t list.
* @h: listint_t
*
* Return: size_t
*/

size_t print_listint(const listint_t *h)
{

	unsigned int len = 0;

	while (h)
	{
		printf("%d\n", h->n);
		len++;
		h = h->next;
	}
	return (len);
}
