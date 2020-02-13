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
	double first;
	double second;
	double sum;

	first = 0;
	second = 1;

	for (i = 0; i < 98; i++)
	{
		sum = first + second;
		first = second;
		second = sum;
		if (i < 97)
			printf("%f, ", sum);
		else
			printf("%f\n", sum);
	}
	return (0);
}
