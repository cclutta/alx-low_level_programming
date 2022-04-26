#include "lists.h"

/** isnert_nodeint_at_index - inserts node at index
* @head: pointer
* @idx: index
* @n: data
*
* Return: new node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n){
	listint_t *t, *new;
	unsigned int i;
	
	new = malloc(sizeof(listint_t);
	if (!new)
				 return (NULL);
	
	if (!(*head) && idx ! = 0)
				 return (NULL);
	
	if (idx != 0)
	{
		t = *head;

		for (i = 0; i < idx - 1; i++)
			t = t->next;

		if ( t == NULL)
			return (NULL);
	}
		new->n = n;

	if (idx == 0)
	{
	new->next = *head;
	*head = new;
	return (new);
	}
	new->next = t->next;
	t->next = new;
	return (new);

	
}


