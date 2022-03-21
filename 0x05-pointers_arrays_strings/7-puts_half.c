#include "main.h"

/**
 * puts_half - that prints half of a string, followed by a new line.
 * @str: pointer
 * Description: returns string
 *
 * Return: Void.
 */
void puts_half(char *str)
{
	int len, j, i;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		for (i = len / 2; str[i] != '\0'; i++)
		{
			putchar(str[i]);
		}
	} else if (len % 2)
	{
		for (j = (len - 1) / 2; j < len - 1; j++)
		{
			putchar(str[j + 1]);
		}
	}
	putchar('\n');
}
