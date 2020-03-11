#include "holberton.h"

/**
 * _pow_recursion - function that returns the value of x raised to the y power
 * @x: integer to raise to the power of y.
 * @y: power to raised integer x.
 * Return: the value of x to the y power.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
