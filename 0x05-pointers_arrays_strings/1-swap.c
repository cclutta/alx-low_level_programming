#include "main.h"

/**
 * swap_int - meter and updates the value it points to to 98.
 * @a: pointer
 * @b: pointer
 * Description: swaps numbers
 *
 * Return: Void.
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;

	*a = *b;

	*b = x;
}
