#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Prints the first 50 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	long int first;
	long int second;
	long int sum;

	first = 0;
	second = 1;

	for (i = 0; i < 50; i++)
	{
		sum = first + second;
		first = second;
		second = sum;
		if (i < 49)
			printf("%ld,", sum);
		else
			printf("%ld\n", sum);
	}
	return (0);
}
