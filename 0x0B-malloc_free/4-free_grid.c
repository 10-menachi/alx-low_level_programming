#include "main.h"

/**
 * free_grid - frees a grid
 * @grid: grid to be freed
 * @height: height
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
