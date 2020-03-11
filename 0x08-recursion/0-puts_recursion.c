#include "holberton.h"

/**
 * _puts_recursion - a function that prints a string, followed by a new line.
 * @s: pointer to a string.
 *
 * Return: void (No data type returned)
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
