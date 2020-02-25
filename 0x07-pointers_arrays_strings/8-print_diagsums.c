#include "holberton.h"

/**
 * print_diagsums - function that prints the sum of the two diagonals of matrix
 * @a: matrix elements
 * @size: size of matrix
 * Return: void (No data value returned)
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1, sum2;

	sum1 = sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + a[i];
	}
	for (i = 0; i < size - 1; i++)
	{
		sum2 = sum2 + a[i];
	}
	printf("%d, %d\n", sum1, sum2);
}
