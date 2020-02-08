#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints all differnt number combinations of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 99; i++)
	{
		if ((i / 10)  < (i % 10))
		{
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			if (i / 10 != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
