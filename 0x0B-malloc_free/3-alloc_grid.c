#include "holberton.h"

/**
 * alloc_grid - function that returns a pointer to 2 dimentional array of ints.
 * @width: width of array.
 * @height: height of array.
 *
 * Return: pointer to a 2 dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int w, h;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	for (h = 0; h < height; h++)
	{
		grid[h] = malloc(width * (sizeof(int)));
			if (grid[h] == NULL)
			{
				return (NULL);
				for (; h >= 0; h--)
					free(grid[h]);
			}
	}
	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
			grid[h][w] = 0;
	}
	return (grid);
}
