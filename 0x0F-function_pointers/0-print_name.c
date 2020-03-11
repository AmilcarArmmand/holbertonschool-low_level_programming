#include "function_pointers.h"

/**
 * print_name - a function that prints a name.
 * @name: char string from main.
 * @f: function pointer to a char string
 *
 * Return: void (No data type returned)
 */
void print_name(char *name, void (*f)(char *))
{
/*	if (!(f)) */
/*		exit(0); */
/*	(*f)(name); */
	(!(f)) ? exit(0) : (*f)(name);
}
