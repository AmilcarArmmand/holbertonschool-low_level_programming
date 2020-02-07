#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints all differnt number combinations of three digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int h;
	int t;
	int i;

	for (h = 0; h < 10; h++)
	{
		for (t = 0; t < 10; t++)
		{
			for (i = 0; i < 10; i++);
			{
				if (h < t)
				{
					putchar(h + '0');
					putchar(t + '0');
					putchar(i + '0');
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
