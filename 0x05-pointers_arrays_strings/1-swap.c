#include "holberton.h"

/**
 * swap_int - Swaps the value of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: void (No return value)
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
