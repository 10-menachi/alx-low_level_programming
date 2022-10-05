#include "stdlib.h"
#include "main.h"
/**
 * free_grid - frees a grid
 * @grid: grid to be freed
 * @height: number of columns
 *
 * Return: void (no return type)
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
