#include "lists.h"

/**
* print_listint - prints all the elements of a listint_t list.
* @h: listint_t
*
* Return: size_t
*/

size_t print_listint(const listint_t *h)
{
	const listint_t *t;
	size_t len = 0;
	
	t = h;

	while (t)
	{
		printf("%d\n", t->n);
		len++;
		t = t->next;
	}
	return (len);
}
