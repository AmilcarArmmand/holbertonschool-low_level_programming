#include "holberton.h"

/**
 * get_endianness - a function that checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int x;

	x = 0x01234567;
	if ((x ^ 1) == 1)
		return (0);
	else
		return (1);
}
