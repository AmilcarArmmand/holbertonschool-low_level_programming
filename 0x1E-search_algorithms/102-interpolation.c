#include "search_algos.h"

/**
 * interpolation_search - Interpolation algorithm search for a value in array
 *
 * @array: a pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: the value to search for in the array
 *
 * Return: first index where value is located, -1 if not found or array is NULL
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low;
	size_t high;
	size_t pos;

	if (!array)
		return (-1);

	low = 0;
	high = size - 1;

	while (array[high] != array[low])
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
			     * (value - array[low]));
		if (pos < low || pos > high)
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			return (-1);
		}
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		if (array[pos] < value)
			low = pos + 1;
		else if (array[pos] > value)
			high = pos - 1;
	}

	return (-1);
}
