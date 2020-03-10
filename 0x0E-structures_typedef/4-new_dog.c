#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - a function that creates a new struct.
 * @name: name component of struct.
 * @age: age component of struct.
 * @owner: owner component of struct.
 *
 * Return: a pointer to the new struct new_dog or NULL (Failure)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->name = name;
	new_dog->name = malloc(((sizeof(name)) * (sizeof(char) + 1)));
	if (new_dog->name == NULL)
	{
		free(new_dog->name);
		return (NULL);
	}
	new_dog->age = age;
	new_dog->owner = owner;
	new_dog->owner = malloc(((sizeof(owner)) * (sizeof(char) + 1)));
	if (new_dog->owner == NULL)
	{
		free(new_dog->owner);
		return (NULL);
	}
	free(new_dog);
	return ((new_dog == NULL) ? NULL : new_dog);
}
