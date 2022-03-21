#include "main.h"

/**
 * puts2 - t prints a string, followed by a new line, to stdout.
 * @str: pointer
 * Description: returns string
 *
 * Return: Void.
 */
void puts2(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(*str);
		}
		str++;
		i++;
	}
	_putchar('\n');
}
