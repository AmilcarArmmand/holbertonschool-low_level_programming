#include "holberton.h"

/**
 * _puts - Funciotn that prints a string, followed by a new line
 *
 * Return: void (No return value)
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
