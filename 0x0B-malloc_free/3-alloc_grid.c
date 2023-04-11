#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - Main Enry
 * @width: width of grid
 * @height: height of grid
 * Return: 0
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int m, n;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (m = 0; m < height; m++)
	{
		grid[m] = malloc(width * sizeof(int));
		if (grid[m] == NULL)
		{
			while (m >= 0)
				free(grid[m--]);
			free(grid);
			return (NULL);
		}


		for (n = 0; n < width; n++)
			grid[i][j] = 0;
	}

	return (grid);
}

