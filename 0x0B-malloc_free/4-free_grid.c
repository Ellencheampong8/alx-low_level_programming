#include "main.h"
#include <stdlib.h>

/**
 * free_grid - It frees the created 2 dimensional grid
 * @grid: the grid
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
