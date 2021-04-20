#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an array of integers
 * @array: a pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: the value to search for in the array
 *
 * Return: first index where value is located, -1 if not found or array is NULL
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int i; /* index of array */

	if (array == NULL)
		return (-1);

	for (i = 0; i < (unsigned int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
