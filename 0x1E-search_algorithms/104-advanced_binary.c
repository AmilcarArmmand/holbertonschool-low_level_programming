#include "search_algos.h"

void print_array(int *array, size_t size);

/**
 * advanced_binary - recursive binary search for value in an array of integers
 *
 * @array: a pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: the value to search for in the array
 *
 * Return: first index where value is located, -1 if not found or array is NULL
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t mid;
	int res;

	res = -1;
	if (array != NULL && size > 0)
	{
		print_array(array, size);
		mid = (size - 1) / 2;

		if (array[mid] < value)
		{
			res = advanced_binary(array + (mid + 1),
					      size - (mid + 1), value);
			if (res >= 0)
				res += mid + 1;
		}
		else if (array[mid] > value)
			res = advanced_binary(array, mid + 1, value);

		else if (mid == 0 || array[mid - 1] < array[mid])
			res = mid;

		else
			res = advanced_binary(array, mid + 1, value);
	}
	return (res);
}

/**
 * print_array - Prints the content of an ordered array of ints
 *
 * @array: Pointer to the head of the array of integers
 * @size: Number of elements in the array
 * Return: No data type returned.
 */
void print_array(int *array, size_t size)
{
	size_t i;

	if (array == NULL)
		return;

	printf("Searching in array: ");
	for (i = 0; i < size ; i++)
	{
		printf("%d", array[i]);
		if (i < size - 1)
			printf(", ");
	}
	printf("\n");
}
