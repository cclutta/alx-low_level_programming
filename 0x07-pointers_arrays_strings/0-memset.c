#include "main.h"

/**
* _memset - that fills memory with a constant byte.
* @s: pointer
* @b: byte
* @n: number of bytes
*
* Return: char pointer
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}	
