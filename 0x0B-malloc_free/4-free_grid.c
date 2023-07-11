#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * free_grid - the function that frees a two dimensional grid
 * previously created by alloc_grid function
 * @grid: the second grid
 * @height: the height dimension of the grid
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
