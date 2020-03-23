#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* _strlen - function that returns the length of a string
* @s: pointer to string
*
* Return: the lenght of the string
*/
int _strlen(char *s)
{
	int len;

	for (len = 0; s[len]; s++)
		len++;
	return (len);
}

/**
* _strdup - function that duplicates a string, including the null byte
* @copy: copy of source string
* @source: source string that will be copied
*
* Return: pointer to copied string.
*/

char _strdup(char *copy, char *source)
{
	int i, len;

	while (*source++)
		len++;
	for (i = 0; i <= len ; i++)
		copy[i] = source[i];
	return (*copy);
}

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
	new_dog->name = malloc(sizeof(new_dog->name));
	if (name == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	new_dog->name = malloc(sizeof(new_dog->owner));
	if (owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;
	free(new_dog);
	return (new_dog);
}
