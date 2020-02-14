#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/**
 * main - Function that finds & prints the largest prime factor of 612852475143
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long n;
	unsigned long div;
	unsigned long largestPrime;

	n = 612852475143;

	while (n % 2 == 0)
	{
		largestPrime = 2;
		n = n / 2;  /* to get an odd value of n */
	}
	for (div = 3; div <= sqrt(n); div += 2)
	{
		while (n % div == 0)
		{
			largestPrime = div;
			n = n / div;
		}
	}
	printf("%ld\n", largestPrime);

	return (0);
}
