#include "holberton.h"

/**
 * wildcmp - a function that compares two strings and returns 1 if identical.
 * @s1: the first string
 * @s2: the second string
 *
 * Return: 1 (Success) or 0 (otherwise)
 */
int wildcmp(char *s1, char *s2)
{
	int i;

	i = 0;

	if (*s1 == *s2 && s1 != '\0')
		return (0);

	if (*s1 != '\0')
	{

	}
	return (1 + i);
}
