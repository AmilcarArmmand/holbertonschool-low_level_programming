#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

	if (name == NULL || owner == NULL)
		return (NULL);
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->name = name;
	new_dog->name = malloc(((strlen(name)) * (sizeof(char) + 1)));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->age = age;
	new_dog->owner = owner;
	new_dog->owner = malloc(((strlen(owner)) * (sizeof(char) + 1)));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		return (NULL);
	}
	return (new_dog);
}
