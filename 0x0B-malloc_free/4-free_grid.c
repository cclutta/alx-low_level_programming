#include "main.h"

/**
* free_grid -  2 dimensional grid previously created by your alloc_grid
* @grid: int pointer pointer
* @height: number
*
* Return: void
*/

void free_grid(int **grid, int height)
{
	height--;
	while (height >= 0)
	{
		free(*(grid + height));
		height--;
	}
	
	free(grid);
}
