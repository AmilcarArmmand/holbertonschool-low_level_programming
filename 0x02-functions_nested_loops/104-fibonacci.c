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
	int n;

	long double first;
	long double second;
	long double fibonacci;

	first = 0; /* by definition */
	second = 1; /* by definition */

	for (n = 0; n < 98; n++)
	{
		fibonacci = first + second;
		first = second;
		second = fibonacci;

		if (n < 97)
			printf("%.0Lf, ", fibonacci);
		else
			printf("%.0Lf\n", fibonacci);
	}
	return (0);
}
