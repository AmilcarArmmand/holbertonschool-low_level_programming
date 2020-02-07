#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that prints all single digit numers of base 10 followed by
 * a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
