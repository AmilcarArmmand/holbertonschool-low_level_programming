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
	if (name == NULL)
		exit(0);
	(*f)(name);
}
