#include "function_pointers.h"

/**
* int_index - that prints a name
* @array: int pointer
* @size: size
* @cmp: function pointer
*
* Return: void
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	
	if (array && cmp)
	{
		if (size <= 0)
		{
			return (-1);
		}
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
			
		}
	}
	return (-1);

}
