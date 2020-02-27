#include "holberton.h"

/**
 * _strlen_recursion - a function that returns the length of a string.
 * @s: a pointer to a string.
 *
 * Return: the length of the string.
 */
int _strlen_recursion(char *s)
{
	int i;

	i = 0;

	if (*s == '\0')
		return (0);

	if (*s != '\0')
	{
		i = _strlen_recursion(s + 1);
	}
	return (1 + i);
}
