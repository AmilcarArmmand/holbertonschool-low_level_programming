#include "holberton.h"

/**
 * print_sign - a function that prints the sign of a number
 * @n : integer value
 *
 * Return: 1 if @n is greater than zero, 0 if @n is zero, and -1 if @n is less
 * than zero.
 */
int print_sign(int n)
{
	int tmp;

	if (n > 0)
	{
		tmp = 1;
	_putchar('+');

	}
	else if (n == 0)
	{
		tmp = 0;
	_putchar('0');

	}
	else
	{
		tmp = -1;
	_putchar('-');

	}

	return (tmp);
}
