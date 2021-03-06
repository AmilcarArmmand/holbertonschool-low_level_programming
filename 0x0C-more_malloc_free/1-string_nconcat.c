#include "holberton.h"

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: the first string
 * @s2: the second string
 * @n: number of bytes of s2 to concat onto s1.
 *
 * Return: a pointer to the newly allocated memory space or NULL (on failure).
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len1, len2;
	char *dest;

	i = len1 = len2 = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (s1 != NULL)
	{
		for (len1 = 0; s1[len1] != '\0'; len1++)
			;
	}
	if (s2 != NULL)
	{
		for (len2 = 0; s2[len2] != '\0'; len2++)
			;
	}
	dest = malloc((len1 + n + 1) * sizeof(char));
	if (dest == NULL)
	{
		free(dest);
		return (NULL);
	}
	for (i = 0; i < len1 ; i++)
		dest[i] = s1[i];
	if (n < len2)
	{
		for (i = 0; i < n; i++)
			dest[len1 + i] = s2[i];
	}
	else
		for (i = 0; i < len2 ; i++)
			dest[len1 + i] = s2[i];
	dest[len1 + i] = '\0';
	return (dest);
}
