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
	
	dogt = malloc(sizeof(dog));
	
	dogt->name = name;
	dogt->age = age;
	dogt->owner = owner;
	
	return (dogt);
}
