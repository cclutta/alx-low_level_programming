#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: pointer
 * Description: returns string
 *
 * Return: Void.
 */
void print_rev(char *s)
{
  int i;
  
	while (*s != '\0')
	{
		s++;
		i++;
	}
	
	while (i > 0)
	{
		s--;
		_putchar(*s);
		i--;
	}
	
	_putchar('\n');
}
