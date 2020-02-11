#include "holberton.h"

/**
 * print_alphabet_x10 - a function that prints the alphabet ten times.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int tmp;
	int c;

	for (tmp = 1; tmp <= 10; tmp++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);

		}
		_putchar('\n');
	}
}
