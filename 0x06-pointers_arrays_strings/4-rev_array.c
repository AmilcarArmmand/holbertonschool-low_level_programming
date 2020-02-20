#include "holberton.h"

/**
 * reverse_array - a function that reverse the content of an array of integers
 * @a: integer array
 * @n: then element in the array to be replaced
 *
 * Return: void (No data returned)
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
