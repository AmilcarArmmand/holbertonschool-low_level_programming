#include "search_algos.h"

void print_array(int *array, size_t size);

/**
 * binary_search - function that searches for a value in an array of integers
 *
 * @array: a pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: the value to search for in the array
 *
 * Return: first index where value is located, or -1 if array is NULL or value
 * is not in the array.
 */
int binary_search(int *array, size_t size, int value)
{
	/* index to the first, last, amd midpoint of the array */
	size_t first, last, mid;

	if (array != NULL && size > 0)
	{
		first = 0;
		last = size - 1;
		print_array(array + first, last + 1 - first);
		while (first < last)
		{
			mid = (first + last) / 2;
			/* print_array(array + first, last + 1 - first); */
			if (array[mid] < value)
				first = mid + 1;
			else if (array[mid] > value)
				last = mid - 1;
			else
				return (mid);
			print_array(array + first, last + 1 - first);
		}
	}

	return (-1);
}

/**
 * print_array - Prints the content of an ordered array of ints
 *
 * @array: Pointer to the first element in array of integers
 * @size: Number of elements in the array
 */
void print_array(int *array, size_t size)
{
	size_t i;

	printf("Searching in array: ");
	for (i = 0; i < size ; i++)
	{
		printf("%d", array[i]);
		if (i < size - 1)
			printf(", ");
	}
	printf("\n");
}
