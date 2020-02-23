#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - prints the sum of the even-numbered Fibonacci numbers under 4,000,000
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	long int first;
	long int second;
	long int fibonacci;
	long int sumofeven;

	first = 0;
	second = 1;
	i = 0;
	sumofeven = 0;
	fibonacci = 0;

	while (fibonacci < 4000000)
	{
		fibonacci = first + second;
		first = second;
		second = fibonacci;
		if (fibonacci % 2 == 0)
			sumofeven += fibonacci;
		i++;
	}
	printf("%ld\n", sumofeven);
	return (0);
}
