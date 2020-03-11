#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Prints the first 98 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int n;

	unsigned long int first;
	unsigned long int second;
	unsigned long int fibonacci;

	first = 0; /* by definition */
	second = 1; /* by definition */

	for (n = 0; n < 98; n++)
	{
		fibonacci = first + second;
		first = second;
		second = fibonacci;

		if (n < 97)
			printf("%lu, ", fibonacci);
		else
			printf("%lu\n", fibonacci);
	}
	return (0);
}
