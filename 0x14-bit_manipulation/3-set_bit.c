#include "holberton.h"

/**
 * set_bit - a function that sets the value of a bit to 1 at given index.
 * @n: pointer to an integer value
 * @index: index, starting from 0, of the bit to set to 1
 *
 * Return: 1 (SUCCESS) or -1 (FAILURE)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
/* check that the index is less than the size of data type used */
	if (index > sizeof(n) * 7)
		return (-1);
/* left shift index number of positions and set that bit to 1 */
	*n = *n | 1 << index;
	return (1);
}
