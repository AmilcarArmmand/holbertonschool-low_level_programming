#include "holberton.h"

/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * @b: binary number to convert
 *
 * Return: the converted number or 0 if b is NULL or contains chars not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal;

	decimal = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		decimal = decimal << 1;
		if (*b == '1')
			decimal ^= 1;
		b++;
	}
	return (decimal);
}
