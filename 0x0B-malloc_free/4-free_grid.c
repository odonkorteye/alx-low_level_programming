#include "main.h"
#include <stdlib.h>

/**
 * free_grid - a funcion that frees a 2 dimensional grid.
 * @grid: multidimensional array of integers.
 * @height: grid height.
 * Return: no return value
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
