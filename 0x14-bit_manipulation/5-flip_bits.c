#include "holberton.h"

/**
 * flip_bits - a function that returns the number of bits to flip
 * @n: first number
 * @m: second number
 *
 * Return: the number of bits needed to flip or -1 (Failure)
 *
 * Description: a function that returns the number of bits you would need
 * to flip to get from one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits;
	unsigned int temp;
/* variable to store the number of bits flipped  */
	bits = 0;
/* Exclusive-OR (XOR) numbers to find amount of different bits */
	temp = n ^ m;

	while (temp)
	{
/* if bit is 1 add 1 to bits counter */
		if ((temp & 1) == 1)
		{
			bits++;
		}
/* increment by right shifting down the positions of temp */
		temp = temp >> 1;
	}
	return (bits);
}
