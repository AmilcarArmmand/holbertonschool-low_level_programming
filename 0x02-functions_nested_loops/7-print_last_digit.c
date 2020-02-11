#include "holberton.h"

/**
 * print_last_digit - a function that prints the last digit of a number
 * @n : integer value
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int r)
{
	r = r % 10;

	if (r < 0)
		r = -r;

	_putchar('0' + r);

	return (r);
}
