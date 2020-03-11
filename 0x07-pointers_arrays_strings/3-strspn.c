#include "holberton.h"

/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: the string containing the substring.
 * @accept: bytes to search for in s.
 *
 * Return: number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i; /*counter for s */
	unsigned int j; /* counter for accept */

	for (i = 0; s[i]; i++)
	{
		for (j = 0; s[i] && accept[j]; j++)
		{
			if (accept[j] == s[i])
				break;
		}
		if (!accept[j])
			break;
	}
	return (i);
}
