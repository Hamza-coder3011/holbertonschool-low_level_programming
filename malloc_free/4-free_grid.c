#include <stdlib.h>
#include "main.h"
/**
* free_grid - Frees a 2D grid of integers previously created by alloc_grid.
* @grid: The 2D grid to free.
* @height: The height (number of rows) of the grid.
*
* Return: Nothing.
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
