#include "holberton.h"

/**
 * print_chessboard - a function that prints the chessboard.
 * @a: pointer to an array
 *
 * Return: void (No data returned)
 */
void print_chessboard(char (*a)[8])
{
	unsigned int i; /* row */
	unsigned int j; /*columns */

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
