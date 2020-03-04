#include "holberton.h"

/**
 * argstostr - a function that concatenates all the arguments of a program.
 * @ac: argument count.
 * @av: argument vectors.
 *
 * Return: a pointer to a new string or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	int i, j; /* len1, len2; */

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 1; i < ac; i++)
	{
/*		while (--ac > 0) */
	}
	return (*av);
}
