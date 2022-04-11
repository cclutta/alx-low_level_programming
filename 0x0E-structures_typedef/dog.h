#ifndef FILE_DOG
#define FILE_DOG

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - dog
 * @name: char name
 * @age: float age
 * @owner: char owner
 */


struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);

#endif
