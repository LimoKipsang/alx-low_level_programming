#include "main.h"
/**
 *free_grid - free a two dimensional grid
 *@grid: the grid
 *@height: height of the grid
 */
void free_grid(int **grid, int height)
{
	int f;

	for (f = 0; f < height; f++)
	{
		free(grid[f]);
	}

	free(grid);
}
