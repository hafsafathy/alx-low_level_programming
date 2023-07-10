#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees a 2 dimensional
 * grid previously created by your alloc_grid function.
 * @grid: input 2D array .
 * @height: height of grid.
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL)
		return;
	while (i < height)
		free((int *)grid[i++]);
	free(grid);
}
