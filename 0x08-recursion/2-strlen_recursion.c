#include "holberton.h"

/**
 * _strlen_recursion - a function that returns the length of a string.
 * @s: a pointer to a string.
 *
 * Return: the length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	_strlen_recursion(s + 1);
	return (1 + _strlen_recursion(s + 1));
}
