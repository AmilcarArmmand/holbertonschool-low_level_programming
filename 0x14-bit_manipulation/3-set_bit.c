#include "holberton.h"

/**
 * set_bit - a function that sets the value of a bit to 1 at given index.
 * @n: integer value
 * @index: index, starting from 0, of the bit to set to 1
 *
 * Return: 1 (SUCCESS) or -1 (FAILURE)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int newNumber;

	if (index > sizeof(n) * 7)
		return (-1);
	newNumber = *n;
	newNumber |= 1 << index;
	return (newNumber);
}
