#include "holberton.h"

/**
 * _sqrt_recursion -
 * @n: integer to find the natural square root of.
 *
 * Return: the natural square root of n.
 */
int _sqrt_recursion(int n)
{
	int sm, lg;

	if (n < 0)
		return (-1);
	else if (n == 1)
		return (n);

	sm = _sqrt_recursion(n / 4) * 2;
	lg = sm + 1;

	if (lg * lg > n)
		return (sm);
	else
		return (lg);
}
