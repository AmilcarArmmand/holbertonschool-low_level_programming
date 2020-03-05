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
	void *buffer;

	if (nmemb == 0 || size == 0)
		return (NULL);
	buffer = malloc(nmemb * size + 1);
	if (buffer == NULL)
		return (NULL);
	return (buffer);
}
