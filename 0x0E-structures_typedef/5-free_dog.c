#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - a function that frees memory from a struct.
 * @d: name component of struct.
 *
 * Return: void (No return data type)
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		exit(0);
	free(d->name);
	free(d->owner);
	free(d);
}
