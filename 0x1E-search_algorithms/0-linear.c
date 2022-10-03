#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * @array: the array to search
 * @size: size of the array
 * @value: value to search
 *
 * Return: int
 */

int linear_search(int *array, size_t size, int value)
{
    size_t i;

    if (!array)
        return (-1);
    for (i = 0; i < size; i++)
    {
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        if (array[i] == value)
        {
            return (i);
         }
     }
     return (-1);
}
