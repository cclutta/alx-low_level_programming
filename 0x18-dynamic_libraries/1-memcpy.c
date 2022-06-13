#include "main.h"

/**
* _memcpy - hat copies memory area.
* @dest: pointer
* @src: pointer
* @n: number of bytes
*
* Return: char pointer
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
