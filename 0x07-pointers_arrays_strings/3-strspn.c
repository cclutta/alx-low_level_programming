#include "main.h"

/**
* _strspn -  that gets the length of a prefix substring.
* @s: pointer
* @accept: pointer
*
* Return: unsigned int
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	char *a = accept;
	
	while (*s++)
	{
		while (*accept++)
			if (*(s - 1) == *(accept - 1))
			{
				i++;
				break;
			}
		if (!(*--accept))
			break;
		accept = a;
	}
	return (i);
}
