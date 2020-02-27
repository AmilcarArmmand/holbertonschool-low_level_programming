#include "holberton.h"

/**
 * is_prime_number - a function that determines if a number is a prime number.
 *
 * Return: 1 (Success) or 0 (false)
 */
int is_prime_number(int n)
{
	int x;

	x = 2;

	if (n <= 2)
		return (1);
	if (n % 2 == 0 && x > 1)
		return (-1);
	else if (x == 1)
		return (0);
	is_prime_number(n - 1);
	return (0);
}
