#include "holberton.h"

/**
 * is_prime_number - a function that determines if a number is a prime number.
 * @n: integer to test if it is a prime number.
 *
 * Return: 1 (Success) or 0 (false)
 */
int is_prime_number(int n)
{
	int result;

	result = 0;

	if (n <= 2 && n % 2 == 0 && n != 2)
		result = 0;
	else
/*		(is_prime_number(n * is_prime_number((n / 2) - 1)); */
		result = 1;

return (result);
}
