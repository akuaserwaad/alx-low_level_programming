#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid
 * previously created by your alloc_grid function
 * @grid: pointer to 2D array
 * @height: height of array
 */
void free_grid(int **grid, int height)
{
	int x;

	if (grid == NULL)
	{
		free(grid);
	}

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}

	free(grid);
}
