#include "holberton.h"

/**
 * _strchr - a function that locates a character string
 * @s: string containing char c.
 * @c: character that will be searhed for within string s.
 *
 * Return: pointer to first occurrence of the character c in the string.
 */
char *_strchr(char *s, char c)
{
	while (s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*s == '\0')
			return NULL;
		s++;
	}
	return (0);
}
