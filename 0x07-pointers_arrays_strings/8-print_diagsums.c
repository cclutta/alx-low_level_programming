#include "main.h"

/**
 * print_diagsums -  that prints the chessboard.
 * @a: pointer to char
 * @size: the size
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i;
	int diag1 = 0;
	int diag2 = 0;

	for (i = 0; i < size; i++)
	{
		diag1 += *(a + (size * i + i));
		diag2 += *(a + (size * i + size - 1 - i));
	}
	printf("%d, %d\n", diag1, diag2);
}

