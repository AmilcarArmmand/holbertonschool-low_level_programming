#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_to_98 - a function that prints numbers from n to 98.
 *
 * @n: number passed to the function
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d", n);
			printf(", ");
		}
		printf("%d", n);
	}
	else if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d", n);
			printf(", ");
		}
		printf("%d", n);
	}
	else
		printf("%d", n);

	printf("\n");
}
