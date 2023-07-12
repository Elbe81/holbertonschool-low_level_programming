#include <stdlib.h>

/**
 * free_grid - A function that frees a 2 dimensional grid.
 * @grid: Pointer as a parameter.
 * @height: Variable as a parameter.
 *
 * Return: To 0.
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
