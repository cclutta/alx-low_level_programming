#include "main.h"

/**
* array_range - that allocates memory using malloc
* @min: int
* @max: int
*
* Return: pointer
*/

int *array_range(int min, int max)
{
	int l = 0;
	int i;
	int *p;
	int j = min;

	if (min > max)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		l++;
	}

	p = malloc(l * sizeof(int));

	if (p == NULL)
	return (NULL);

	i = 0;

	while (i < l && j <= max)
	{
		p[i] = j;
		i++;
		j++;
	}
	return (p);
}
