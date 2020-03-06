#include "holberton.h"

/**
 * _realloc - a function that reallocates a memory block using malloc and free.
 * @ptr:
 * @old_size:
 * @new_size:
 *
 * Return: a pointer to the new memory area or NULL (on failure).
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
/*	unsigned int i; */
	char *newptr;

	if (ptr == NULL)
	{
		newptr = malloc(new_size * sizeof(ptr));
		if (newptr == NULL)
			return (NULL);
		return (newptr);
	}
	if (old_size == new_size)
		return (ptr);
	newptr = malloc(new_size * sizeof(char));

/*	if (old_size > new_size) */

/*		for (i = 0; i < new_size; i++) */
/*			newptr[i] = ptr[i]; */




/*	if (old_size < new_size) */
	free(ptr);
	return (newptr);
}
