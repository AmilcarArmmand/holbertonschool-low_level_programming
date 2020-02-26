#include "holberton.h"

/**
 * _print_rev_recursion - a function that prints a string in reverse.
 * @s: pointer to a string
 *
 * Return: void (No data typereturned)
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
