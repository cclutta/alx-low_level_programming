#include "main.h"

/**
 * print_square - print square
 * @n: input size
 *
 * Description: prints a square
 * Return: Always (0)
 */

void print_square(int n)
{
	int i;
	int j;

	if (n <= 0)
		_putchar('\n');

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

}
