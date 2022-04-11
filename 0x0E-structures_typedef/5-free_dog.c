#include "dog.h"

/**
* free_dog - that frees dogs
* @d: dog_t
*
* Return: void
*/

void free_dog(dog_t *d)
{
	if (d)
	{
	free(d);
	}
}
