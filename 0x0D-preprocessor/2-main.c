#include <stdio.h>
#include <stdlib.h>

/**
 * main - a function that prints the name of the file is was compiled from.
 *
 * Return: void (No data type returned)
 */
int main(void)
{
	printf("%s\n", __FILE__);
	exit(EXIT_SUCCESS);
}
