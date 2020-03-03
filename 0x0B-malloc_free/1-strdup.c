#include "holberton.h"

/**
 * _strdup - function that returns a pointer to a newly allocated memory space
 * @str: a pointer to a char string
 *
 * Return: a pointer to the duplicated string or NULL if failed
 */
char *_strdup(char *str)
{
	unsigned int i;
	int len;
	char *dupstring;

	if (str == NULL)
		return (NULL);
	len = 0;
	while (str[len] != '\0')
		len++;

	dupstring = malloc((sizeof(char) * (len)) + 1);
	if (dupstring == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		dupstring[i] = str[i];

	dupstring[len + 1] = '\0';
	return (dupstring);
}
