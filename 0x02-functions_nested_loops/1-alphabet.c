#include "holberton.h"

/**
 * print_alphabet - a function that prints the alphabet, in lowercase.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}

	_putchar('\n');
}
