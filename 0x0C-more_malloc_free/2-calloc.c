#include "holberton.h"

/**
 * _calloc - a function that allocates memory for an array using malloc.
 * @nmemb: number of elements
 * @size: size of bytes of each element
 *
 * Return: void or NULL if nmemb or size is 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *buffer;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	buffer = malloc(nmemb * size);
	if (buffer == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		buffer[i] = 0;
	return (buffer);
}
