#include "holberton.h"

/**
 * print_most_numbers - Function that prints most  numbers from 0 to 9
 *
 */
void print_most_numbers(void)
{
	int i;

	i = 0;

	while (i <= 9)
	{
		if (i == 2 || i == 4)
			i++;
		else
		{
			_putchar(i + '0');
			i++;
		}
	}

	_putchar('\n');
}
