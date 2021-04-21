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
	int low = 0;
	int high = size - 1;
	int mid;

	while ((array[high] != array[low]) && (value >= array[low]) && (value <= array[high]))
	{
		mid = low + ((value - array[low]) * (high - low) / (array[high] - array[low]));

		printf("Value checked array[%d] = [%d]\n", mid, array[mid]);
		if (array[mid] < value)
			low = mid + 1;
		else if (value < array[mid])
			high = mid - 1;
		else
			return (mid);
	}

	if (value == array[low])
		return (low);

	printf("Value checked array[%d] is out of range\n", mid);
	return (-1);
}
