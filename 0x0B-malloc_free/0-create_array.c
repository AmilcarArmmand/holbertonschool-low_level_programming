#include "holberton.h"

/**
 * create_array - a function that creates an array of chars and initializes it.
 * @size: size of array.
 * @c: char to initialize each element of the array.
 *
 * Return: a pointer to the array of NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *newarray;

	newarray = malloc(size * sizeof(c));

	if (newarray == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		newarray[i] = c;
	}

	return (((size == 0) ? NULL : newarray));
}
