#include "main.h"

/**
* create_array - that creates an array of chars and initializes it
* @size: number
* @c : char
* 
* Return: char pointer
*/

char *create_array(unsigned int size, char c)
{

	char * _array;
	int i;
	
	if (size == 0)
	{
	return (NULL);
	}
	
	_array = malloc(size * sizeof(char));
	
	for (i = 0; i < size; i++)
	{
	
	_array[i] = c;
	}
	
	return (_array);
	
}
