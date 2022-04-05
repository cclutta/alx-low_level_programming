#include "main.h"

/**
* alloc_grid - that returns a pointer to a 2 dimensional array of integers
* @width: number
* @height: number
*
* Return: int pointer pointer
*/

int **alloc_grid(int width, int height)
{
	char **s;
	int i, j;
	
	if (width <= 0 || height <= 0)
		return (NULL);
	
	s = malloc(height * width * sizeof(int));
	
	if (s == NULL)
		return (NULL);
	
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			s[i][j] = 0;
		}
	}
	
	return (s);
}
