#include <stdlib.h>
#include <stdio.h>

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
	div = 2;

	while (n != 0)
	{
		if (n % div != 0)
			div += 1;
		else
		{
			largestPrime = n;
			n = n / div;
			if (n == 1)
				printf("%li\n", largestPrime);

		}
	}

	return (0);
}
