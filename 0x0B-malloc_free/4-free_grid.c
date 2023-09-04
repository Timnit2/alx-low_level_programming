#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * free_grid - to fre 2 dimensional
 * @grid: grid
 * @height: height
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

