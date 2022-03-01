#include "main.h"
#include <stdlib.h>

/**
 * free_grid - funcion that frees a 2 dimensional grid previously
 * created by my alloc_grid function
 *
 * @grid: pointer to grid array
 * @height: number to arrays
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
