#include "holberton.h"

/**
 * print_binary - a function that prints the binary representation of a number
 * @n: unsigned long int to convert
 *
 * Return: the binary representation of n
 */
void print_binary(unsigned long int n)
{
	while (n == 0 || n == 1)
	{
		_putchar((n & 1) ? '1' : '0');
		return;
	}
	print_binary(n >> 1);
		_putchar((n & 1) ? '1' : '0');
}
