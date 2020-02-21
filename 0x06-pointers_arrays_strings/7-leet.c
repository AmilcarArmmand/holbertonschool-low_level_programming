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

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == 'a' || 'A')
			s[i] = '0' + 4;
		else if (s[i] == 'e' || 'E')
			s[i] = '0' + 3;
		else if (s[i] == 'o' || 'O')
			s[i] = '0';
		else if (s[i] == 't' || 'T')
			s[i] = '0' + 7;
		else if (s[i] == 'l' || 'L')
			s[i] = '0' + 1;
	}
	return (s);
}
