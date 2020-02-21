#include "holberton.h"

/**
 * print_number - a function that prints an integer
 * @n: integer that the function prints
 *
 * Return: void (No data value returned)
 */
void print_number(int n)
{
	if (n < 0)
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
