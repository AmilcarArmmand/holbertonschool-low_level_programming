#include "holberton.h"

/**
 * cap_string -  a function that capitalizes all words of a string
 * @s: string argument
 *
 * Return: string
 */
char *cap_string(char *s)
{
	int i;
	int j;
/*	int len1; */

	char separators[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(',
			     ')', '{', '}'};

/*	for (len1 = 0; s[len1] != '\0'; len1++) */
/*		; */

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (s[0] >= 'a' && s[0] <= 'z')
				s[0] -= 32;
			else if (separators[j] == s[i])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
					s[i + 1] -= 32;
			}
		}
	}
	return (s);
}
