#include "main.h"

/**
 * print_array - that prints half of a string, followed by a new line.
 * @a: pointer
 * @n: size
 * Description: returns string
 *
 * Return: Void.
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
