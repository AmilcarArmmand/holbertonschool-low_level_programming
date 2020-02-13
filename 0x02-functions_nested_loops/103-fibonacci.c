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
	long int tsum;

	first = 0;
	second = 1;

	for (i = 0; i < 35; i++)
	{
		sum = first + second;
		first = second;
		second = sum;
		if (sum % 2 == 0)
			tsum += sum;

		printf("%ld\n", tsum);
	}
	return (0);
}
