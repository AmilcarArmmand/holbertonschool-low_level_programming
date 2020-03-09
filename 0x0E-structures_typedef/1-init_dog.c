#include "dog.h"

/**
 * init_dog - function that initializes a variable of type struct dog.
 * @d: struct variable from main.
 * @name: name element of struct
 * @age: age element of struct
 * @owner: owner lelment of struct
 *
 * Return: void (No data type return)
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
/*	*d = (struct dog) { name, age, owner};  */
}
