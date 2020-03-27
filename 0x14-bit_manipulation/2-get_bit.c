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
	if (!(n >> index))
		return (-1);

	if ((n >> index) & 1)
		return (1);
	else
		return (0);
}
