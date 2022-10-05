#include "search_algos.h"

/**
 * binary_search - searches for a value in an array of integers
 * @array: the array to search
 * @size: size of the array
 * @value: value to search
 *
 * Return: int
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0;
	first = 0;
	last = size - 1;

	if (array)
	{
		while (first <= last)
		{
			print_array(array, first, last);
			i = (first + last) / 2; /* Gets the middle value */

			if (value > array[i]) /* Uses the right part of array */
				first = i + 1;
			else if (value < array[i]) /* Uses the left part of array */
				last = i - 1;
			else
				return (i);
		}
	}

	return (-1);
}

/**
* print_array - to print array
* @array: the array to print
* @f: first index
* @l: last index
*
* Return: void
*/
void print_array(int *array, size_t f, size_t l)
{
	size_t i;

	printf("Searching in array: ");
	for (i = f; i <= l; i++)
	{
		if (i != f)
			printf(", ");
		printf("%d", array[i]);
	}
	printf("\n");
}
