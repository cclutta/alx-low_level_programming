#include "main.h"
/**
* _strlen - size of string
* @s: char pointer
*
* Return : int
*/
int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		s++;
		l++;
	}
	return (l);
}

/**
* str_concat - that concatenates two strings
* @s1: char pointer
* @s2: char pointer
*
* Return : char pointer
*/

char *str_concat(char *s1, char *s2)
{
 unsigned int l1 = 0, l2 = 0;
	char *s, *p;

	if (!s1)
		s1 = "";
	else
		l1 = _strlen(s1);

	if (!s2)
		s2 = "";
	else
		l2 = _strlen(s2);

	s = malloc(l1 + l2 + 1);
	if (!s)
		return (0);

	p = s;
	while (*s1)
		*p++ = *s1++;

	while ((*p++ = *s2++))
		;

	return (s);
	
}
