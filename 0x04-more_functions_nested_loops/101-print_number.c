#include "holberton.h"

/**
 * print_number - A function that prints an integer
 * @n: integer value to print
 */
void print_number(int n)
{
	if (n < 0 && n > -2147483648)
	{
		n = -n;
		_putchar('-');
	}

	if (n / 10)
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + '0');
}
