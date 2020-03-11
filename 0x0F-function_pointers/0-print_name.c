#include "function_pointers.h"

/**
 * print_name - a function that prints a name.
 * @name:
 * @f: function pointer to a char string
 *
 * Return: void (No data type returned)
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
