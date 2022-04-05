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
	
	if (size == 0)
	{
	return (NULL);
	}
	
	_array = malloc(size * sizeof(char));
	
	_array[0] = c;
	
	return (_array);
	
}
