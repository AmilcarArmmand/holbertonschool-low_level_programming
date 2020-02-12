#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Prints the sum of the natural numbers that are multiples
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	int sum;
	int i;

	sum = 0;
	for (i = 0, num = 1024; i < num; i++)
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;

	printf("%d\n", sum);
	return (0);
}
