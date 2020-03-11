#include "holberton.h"

/**
 * leet - a function that encodes a string into 1337.
 * @s: string that will be encoded.
 *
 * Return: string encoded into 1337.
 */
char *leet(char *s)
{
	int i;
	int j;
	char leet[] = "aAeEoOtTlL4433007711";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; leet[j]; j++)
		{
			if (s[i] == leet[j])
			{
				s[i] = leet[j + 10];
				break;
			}
		}
	}
	return (s);
}
