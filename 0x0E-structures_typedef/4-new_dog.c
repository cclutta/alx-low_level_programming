#include "dog.h"

/**
* new_dog - creates a new dog
* @name: char
* @age: float
* @owner: char
*
* Return: void
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogt;
	int i = 0, j = 0, k;
	
	dogt = malloc(sizeof(dog_t));
	
	if (dogt == NULL)
	{
		return (NULL);
	}
	
	while (name[i] != '\0')
	{
		i++;
	}
	 while (owner[j] != '\0')
	 {
		 j++;
	 }
	
	dogt->name = malloc(i * sizeof(dogt->name));
	if (dogt->name == NULL)
	{
		free(dogt->name);
		return (NULL);
	}
	
	for (k = 0; k <= i; k++)
	{
		dogt->name[k] = name[k];
}
	
	dogt->age = age;
	
	dogt->owner = malloc(j * sizeof(dogt->owner));
	if (dogt->owner == NULL)
	{
		free(dogt->owner);
		return (NULL);
	}
	
	for (k = 0; k <= j; k++)
	{
		dogt->owner[k] = owner[k];
}
	
	
	return (dogt);
}
