#include "holberton.h"

/**
 * array_range - a function that creates an array of integers.
 * @min: minimum integer value.
 * @max: maximum integer value.
 *
 * Return: a pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int *buffer;
	int i;

	if (min > max)
		return (NULL);
	buffer = malloc((max - min + 1) * sizeof(int));
	if (buffer == NULL)
		return (NULL);
	for (i = 0; i <= (max - min); i++)
	{
		buffer[i] = i;
	}
	return (buffer);
}
