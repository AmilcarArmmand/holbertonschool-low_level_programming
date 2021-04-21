#include "search_algos.h"

void print_array(int *array, size_t size);
int sub_bin(int *array, size_t size, size_t cur, int value);
int binary_search(int *array, size_t size, int value);

/**
 * exponential_search - Exponential algorithm search for a value in array
 *
 * @array: a pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: the value to search for in the array
 *
 * Return: first index where value is located, -1 if not found or array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound;
	size_t low;
	int range;

	bound = 1;

	if (!array)
		return (-1);
	while (bound < size && array[bound] < value)
	{
		bound *= 2;
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
	}

	low = bound / 2;
	bound = (bound < size - 1) ? bound : size - 1;
	printf("Value found between indexes [%lu] and [%lu]\n", low, bound);
	range = binary_search(array + low, bound + 1 - low, value);
	if (range >= 0)
		return (range + low);

	return (-1);
}

/**
 * binary_search - function that searches for a value in an array of integers
 *
 * @array: a pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: the value to search for in the array
 *
 * Return: first index where value is located, -1 if not found or array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (sub_bin(array, size, 0, value));
}

/**
 * sub_bin - recursive binary search
 *
 * @array: pointer to the first element in array of ints
 * @size: size of sub array
 * @cur: index before pointer of sub array
 * @value: value to search for in array
 *
 * Return: the index of value, or -1
 */
int sub_bin(int *array, size_t size, size_t cur, int value)
{
	size_t mid;

	print_array(array, size);
	if (size == 1)
	{
		if (array[0] == value)
			return (cur);
		else
			return (-1);
	}

	mid = (size % 2 == 0) ? (size / 2) - 1 : size / 2;

	if (array[mid] == value)
		return (cur + mid);
	if (array[mid] > value)
		return (sub_bin(array, mid, cur, value));
	return (sub_bin(array + mid + 1, size - mid - 1, cur + mid + 1, value));
}

/**
 * print_array - Prints the content of an ordered array of ints
 *
 * @array: Pointer to the head of the array of integers
 * @size: Number of elements in the array
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
