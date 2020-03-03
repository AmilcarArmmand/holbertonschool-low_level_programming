#include "holberton.h"

/**
 * str_concat - a function that concatenates two strings
 * @s1: string one.
 * @s2: string two.
 *
 * Return: a new allocated space in memory or NULL of failure.
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, len1, len2;
	char *newstring;

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	if (s1 == NULL && s2 == NULL)
		return (NULL);

	newstring = malloc(sizeof(char) * (len1 + len2 + 1));
	if (newstring == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		newstring[i] = s1[i];
	for (i = 0; i < len2; i++)
		newstring[len1 + i] = s2[i];

	newstring[len1 + len2 + 1] = '\0';
	return (newstring);
}
