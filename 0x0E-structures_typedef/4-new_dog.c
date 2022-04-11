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
	
	if (doge == NULL)
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
	
	
	
	
	dogt->name = name;
	dogt->age = age;
	dogt->owner = owner;
	
	return (dogt);
}
