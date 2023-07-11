#include "main.h"

/**
 * free_grid - free up grid memory
 * @grid: the grid to free.
 * @height: the height of grid.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

}
