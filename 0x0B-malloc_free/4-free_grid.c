#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - Main Entry
 * @grid: input
 * @height: input
 */
void free_grid(int **grid, int height)
{
	int y;

	if (grid != NULL || height != 0)
	{
		for (y = 0; y < height; y++)
		{
			free(grid[y]);
		}
		free(grid);
	}
}
