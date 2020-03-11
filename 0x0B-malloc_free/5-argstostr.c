#include "holberton.h"
#include <string.h>

/**
 * argstostr - a function that concatenates all the arguments of a program.
 * @ac: argument count.
 * @av: argument vectors.
 *
 * Return: a pointer to a new string or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	int i, j, k;
	char *s;
	int length;

	if (ac == 0 || av == NULL)
		return (NULL);
	length = k = 0;

	for (i = 1; i < ac; i++)
	{
		length += strlen(av[i]);
		s = malloc((length + ac) * sizeof(char));

		for (j = 0; av[i][j] != '\0'; j++)
		{
			s[k] = av[i][j];
		}
		s[k] = '\n';
		k++;
	}
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	return (s);
}
