#include "holberton.h"

/**
 * print_array - a function that prints n elements of an array of integers
 * @a: pointer to an array of integers
 * @n: number of elements to print
 *
 * Return: void (No return data)
 */
void print_array(int *a, int n)
{
	int counter;

	for (counter = 0; counter < n; counter++)
	{
		printf("%d", a[counter]);
		{
			if (counter != (n - 1))
				printf(", ");
		}
	}
	printf("\n");
}
