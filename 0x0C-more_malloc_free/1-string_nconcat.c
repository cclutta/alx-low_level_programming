#include "main.h"

/**
* string_nconcat - that allocates memory using malloc
* @s1: char pointer
* @s2: char pointer
* @n: number
*
* Return: pointer
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int l1 = 0, l2 = 0;
	unsigned int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[l1] != '\0')
	{
		l1++;
	}

	while (s2[l2] != '\0')
	{
		l2++;
	}
	if (n > l2)
		n = l2;
	p = malloc((l1 + n + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	
	for (i = 0; i < l1; i++)
	{
		p[i] = s1[i];
	}
	for(; i < (n + l1); i++)
	{
		p[i] = s2[i - l1];
	}
	p[i] = '\0';
	return (p);

}
