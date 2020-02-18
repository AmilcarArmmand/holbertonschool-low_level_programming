#include "holberton.h"

/**
 * _atoi - a function that converts a string to an integer.
 * @s: char string
 *
 * Return: integer value
 */
int _atoi(char *s)
{
	int i;
	int n;

	n = 0;
	for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
		n = 10 * n + (s[i] - '0');

	return (n);
}
