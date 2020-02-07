#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints all possible numbers fo two digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 10; k++)
			{
				for (l = 0; l < 10; l++)
				{
					if (i < j || k < l)
					{
						putchar(i + '0');
						putchar(j + '0');
						putchar(' ');
						putchar(k + '0');
						putchar(l + '0');
						putchar(',');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
