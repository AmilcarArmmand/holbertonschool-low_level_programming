#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_bit - a function that returns the value of a bit at given index.
 * @n: the number indexed
 * @index: index, starting from 0 of the bit wanted
 *
 * Return: the value of the bit at index or -1 (ERROR)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	for (i = 0; i <= index; i++)
	{
/*		printf("%lu\n", n); */
		n = n >> 1;
	}
	return ((n & 1) ? 1 : 0);
}
