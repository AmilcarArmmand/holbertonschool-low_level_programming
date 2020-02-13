#include "holberton.h"

/**
 * print_line - Function that draws a straight line in the terminal
 * @n: the number of times a character will be printed
 */
void print_line(int n)
{
	if (n > 0)
	{
		while (n--)
			_putchar('_');
	}
	_putchar('\n');

}
