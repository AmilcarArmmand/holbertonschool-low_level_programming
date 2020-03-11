#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @array: array of ints
 * @size: size of array
 * @cmp: pointer to function that compares values in the array
 *
 * Return: the number of matching integers in the array or NULL (Failure)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i; /* counter for array */

	if (size <= 0 || !(array) || !(cmp))
		return (-1);

	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]))
			break;
	}
	return ((i == size) ? -1 : i);
}
