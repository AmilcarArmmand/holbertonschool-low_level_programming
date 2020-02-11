#include "holberton.h"

/**
 * print_last_digit - a function that prints the last digit of a number
 * @n : integer value
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = -n;

	_putchar('0' + n % 10);
	return (n % 10);
}
