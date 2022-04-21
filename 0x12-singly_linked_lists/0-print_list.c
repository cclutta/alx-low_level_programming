#include "lists.h"

/**
* print_list - that prints all the elements of a list_t list.
* @h: list_t
*
* Return: size_t
*/
size_t print_list(const list_t *h)
{
	size_t len = 0;
	const list_t *current = h;

	while (current)
	{
		if (current->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", current->len, current->str);
		}

		len++;
		current = current->next;
	}
	return (len);

}
