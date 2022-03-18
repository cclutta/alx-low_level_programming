#include "main.h"

/**
 * print_triangle - Print triangle 
 * @size : The height of the triangle
 * Return: Void.
 */
void print_triangle(int size)
{
	int i;
	int j;
	int space;

	for (i = 0; i < size; i++)
	{
		for (space = size - 1 - i; space > 0; space--)
		{
			_putchar(' ');
		}
		for (j = 0; j <= i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
