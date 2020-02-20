#include "holberton.h"

/**
 * _strcmp - a function that compares two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: the differnce between the pointers to s1 and s2
 */
int _strcmp(char *s1, char *s2)
{
	int i;
/*	int s1Position; */
/*	int s2Position; */

	for (i = 0; s1[i] == s2[i]; i++)
	{
		if (s1[i] == '\0')
		return (0);
	}
	return (s1[i] - s2[i]);
}
