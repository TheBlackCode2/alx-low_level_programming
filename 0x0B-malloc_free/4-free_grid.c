#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees 2 dimensional array
 * @grid: the input 2 dimensional arry
 * @height: the size of rows
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
