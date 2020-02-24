#include "holberton.h"

/**
 * _memset - a function that fills memory wiht a constant byte.
 * @s: pointer to a memory area
 * @b: constant byte
 * @n: number of bytes to fill with b
 *
 * Return: a pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i; /* counter */

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
