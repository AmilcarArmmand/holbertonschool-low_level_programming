#include "holberton.h"

/**
 * _abs - a function that computes the absolute value of an integer
 * @n : integer value
 *
 * Return: the absolute value of n
 */
int _abs(int n)
{
	if (n < 0)
		n = -n;

	return (n);
}
