#include "holberton.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: pointer to string s
 * Return:
 */
int _strlen(char *s)
{
	int n;

	n = 0;
	while (s[n] != '\0')
	{
		n++;
	}
       	return (n);
}
