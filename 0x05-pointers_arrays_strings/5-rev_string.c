#include "main.h"

/**
 * rev_string - unction that reverses a string.
 * @s: pointer
 * Description: returns string
 *
 * Return: Void.
 */
void rev_string(char *s)
{
	int i = 0;
	char *_s = s;
	char temp[2000];
	
	while (*s != '\0')
	{
		temp[i] = *s;
		s++;
		i++;
	}

	i = 0;

	while (s > _s)
	{
		s--;
		*s = temp[i];
		i++;
	}
}
	
