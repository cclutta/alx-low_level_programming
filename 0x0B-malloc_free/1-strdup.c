#include "main.h"

/**
* _strdup - that creates an array of chars and initializes it
* @str : char pointer
*
* Return: char pointer
*/

char *_strdup(char *str)
{
	char *_str;
	int i = 0;
	int j;
	
	if(!str)
		return (NULL);
	
	while (*(str + i))
		i++;
	
	i++;
	
	
	_str = malloc(i * sizeof(char));
	
	if (_str == NULL)
	{
		return (NULL);
	}
	
	for(j = 0; j <= i; j++)
	{
		_str[j] = str[j];
	}
	
	return (_str);
	


}
