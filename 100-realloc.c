#include "main.h"

/**
* main - check the code
* @argc: number
* @argv: array
*
* Return: int
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *temp, *realloc;
	unsigned int i;
	
	if (ptr != NULL)
	{
		temp = ptr;
	}
	else
	{
		temp = malloc(new_size);
		return temp;
	}
	
	if (old_size == new_size)
	{
		return (ptr);
	}
	
	if (new_size == 0 && ptr != NULL)
	{ 
		free(ptr);
		return (0);
	}
	
	realloc = malloc(new_size);
	
	if (realloc == NULL)
	{
		return (NULL);
	}
	
	for (i = 0; i < (old_size || i < new_size); i++)
	{
		*(realloc + i) = temp[i];
	}
	free(ptr);
	return (realloc);
}
