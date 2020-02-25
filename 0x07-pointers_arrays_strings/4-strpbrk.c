#include "holberton.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: string to be searched.
 * @accept: search string
 *
 * Return: a pointer to the bytes in s that match one of the bytes in accept
 * or NULL is no bytes are found.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j; /* counters for *s and *accept */
	unsigned int slen, alen; /* length of *s and *accept  */
	char *stemp;
	char *atemp;

	for (slen = 0, stemp = s; *stemp; stemp++)
		slen++;
	for (atemp = accept, alen = 0; *atemp; atemp++)
		alen++;

	for (i = 0; i < slen; i++)
	{
		for (j = 0; j < alen; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return (NULL);
}
