#include "search_algos.h"

int min_value(int a, int b);

/**
 * jump_search - function that searches for a value in an array of integers
 * @array: a pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: the value to search for in the array
 *
 * Return: first index where value is located, -1 if not found or array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	unsigned int step;
	unsigned int prev;
	unsigned int i;

	if (array == NULL)
		return (-1);

	/* block size to be jumped */
	step = sqrt((int)size);
	prev = 0;

	while (prev < size && array[prev] < value)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		prev = step;
		step += sqrt(size);
	}
	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", prev - (int)sqrt(size), prev);
	i = prev - (int)sqrt(size);
	while (i < size && i <= prev)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		/* if element is found */
		if (array[i] == value)
			return (i);
		i++;
	}

	return (-1);
}

/**
 * min_value - function that compares and returns the minimum of two numbers
 *
 * @a: first number
 * @b: second number
 *
 * Return: the lower number
 */
int min_value(int a, int b)
{
	return ((a < b) ? a : b);
}
