#include <stdlib.h>
#include "main.h"
/**
* alloc_grid - Creates a 2D array of integers initialized to 0.
* @width: The width (number of columns) of the grid.
* @height: The height (number of rows) of the grid.
*
* Return: A pointer to the 2D array, or NULL if memory allocation fails
*		or if width or height is 0 or negative.
*/
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
