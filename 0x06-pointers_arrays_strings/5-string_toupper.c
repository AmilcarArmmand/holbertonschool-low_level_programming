#include "holberton.h"

/**
 * string_toupper - a function that changes all lowercase of a string to upper
 * @s: string containing uppercase and/or lowercase letters
 *
 * Return: an uppercase char
 */
char *string_toupper(char *s)
{
	int i;
	int len;

	for (len = 0; s[len] != '\0'; len++)
		;
	for (i = 0; i < len; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	}
	return (s);
}
