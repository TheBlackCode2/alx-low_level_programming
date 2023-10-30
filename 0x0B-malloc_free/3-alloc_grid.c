#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - gets a pointer to a 2 dimensional
 *              array of integers
 * @width: the size of columns
 * @height: the size of rows
 * Return: a pointer to a 2 dimensional array,
 *         on success, otherwise NULL on failure
 *         or if width or height is 0 or negative
*/
int **alloc_grid(int width, int height)
{
	int **grid;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		grid[x] = malloc(sizeof(int) * width);

		if (grid[x] == NULL)
		{
			for (; x >= 0; x--)
				free(grid[x]);

			free(grid);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			grid[x][y] = 0;
	}

	return (grid);
}
