#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - a function that prints a struct dog.
 * @d: struct from main.
 *
 * Return: void (No data type returned)
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(0);
	if ((*d).name == NULL)
		printf("(nil)\n");
	else
		printf("Name: %s\n", d->name);

/*	if ((*d).age == 0) */
/*		printf("Age: (nil)\n"); */
/*	else */
		printf("Age: %f\n", d->age);

	if ((*d).owner == NULL)
		printf("(nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}