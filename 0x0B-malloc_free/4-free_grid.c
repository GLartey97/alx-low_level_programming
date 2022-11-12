#include "main.h"

/**
 * free_grid - frees 2D array
 * @grid: 2D grid array
 * @height: height of grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
