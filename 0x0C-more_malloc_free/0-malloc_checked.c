#include "holberton.h"

/**
 * malloc_checked - a function that allocates memory using malloc.
 * @b: the size of the memory to allocate.
 *
 * Return: a pointer to the allocated memory or 98 on (EXIT_FAILURE).
 */
void *malloc_checked(unsigned int b)
{
	void *buffer;

	buffer = malloc(b);
	if (buffer == NULL)
	{
		exit(98);
	}
	return (buffer);
}
