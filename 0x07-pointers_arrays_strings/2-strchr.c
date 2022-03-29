#include "main.h"

/**
* _strchr - that locates a character in a string.
* @s: pointer
* @c: char
*
* Return: char pointer
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		
		s++;
	}
	if (*s == c)
		return (s);
	
return (0);
}
