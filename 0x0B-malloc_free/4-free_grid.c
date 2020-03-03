#include "holberton.h"

/**
 * free_grid - function that frees a 2 dimensional grid created in alloc_grid.
 * @grid: 2 dimensional array.
 * @height: height of the array
 *
 * Return: void (No return data type)
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);


}
