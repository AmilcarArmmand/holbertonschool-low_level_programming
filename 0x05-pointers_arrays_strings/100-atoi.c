#include "holberton.h"

/**
 * _atoi - a function that converts a string to an integer.
 * @s: char string
 *
 * Return: integer value
 */
int _atoi(char *s)
{
	int i; /* ascii number*/
	int j, k; /* counters */
	int n;
	int sign; /* sign of the asci number */

	array[] = {' ', '.', ' ;', ':', '#', '(', ')', '?', '!'};

/* skip whitespace and symbols */
	for (j = 0; s[j]; j++)
	{
		for (k = 0; array[k] < 9; k++)
		{
			if (s[j] == array[k])
				j++;
		}

	}
	n = 0;
	for (i = 0; 
	for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
		n = 10 * n + (s[i] - '0');

	return (n);
}
