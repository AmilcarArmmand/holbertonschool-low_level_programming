#include "holberton.h"

/**
 * _atoi - a function that converts a string to an integer.
 * @s: char string
 *
 * Return: integer value
 */
int _atoi(char *s)
{
	int i, n; /* counters */
	int sign; /* sign of the number */

	sign = 1;
/* skip whitespace and symbols */
	for (i = 0; (s[i] < '0' || s[i] > '9') && s[i] != '\0'; i++)
	{
		sign = (s[i] == '-') ? -1 : 1; /* account for all the signs */
	}

	for (n = 0; s[i] >= '0' && s[i] <= '9'; ++i)
		n = 10 * n + (s[i] - '0');

	return (sign * n);
}
