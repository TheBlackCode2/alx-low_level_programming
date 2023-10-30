#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - gets a pointer to a 2 dimensional
 *              array of integers
 * @width: the size of columns
 * @height: the size of rows
 * Return: a pointer to a 2 dimensional array, otherwise
 *         NULL if it fails or if width or height is 0 or negative
*/
int **alloc_grid(int width, int height)
{
	int **grid;
	int w, h;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid)
	{
		for (h = 0; h < height; h++)
		{
			int *row;

			row = malloc(sizeof(int) * width);

			if (row)
			{
				for (w = 0; w < width; w++)
					row[w] = 0;
			}
			else
			{
				free(grid);
			}

			grid[h] = row;
		}
	}
	return (grid);
}
