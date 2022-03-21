#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: pointer
 * Description: returns string
 *
 * Return: int.
 */
int _strlen(char *s)
{
	int x = 0;

	while (*s != '\0')
	{
		s++;
		x++;

		}

	return (x);

}
