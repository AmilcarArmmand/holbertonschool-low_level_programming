#include "holberton.h"

/**
 * print_triangle - Function that prints a square
 * @size: the size of the triangle
 */
void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size > 0)
	{
		for (i = size; i >= 1; i--) /* number of rows */
		{
			for (j = 1; j < i; j++)
			{
				_putchar(' ');
			}
			for (k = size; k >= i; k--)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
