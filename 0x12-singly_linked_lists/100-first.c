#include "lists.h"

void print_before(void) __attribute__ ((constructor));

/**
 * print_before - use printf before the main function is executed.
 */
void print_before(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
	printf("I bore my house upon my back!\n");
}
