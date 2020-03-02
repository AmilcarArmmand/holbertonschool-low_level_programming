#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - a program that adds positive numbers.
 * @argc: argument count
 * @argv: argument vector containing two numbers.
 *
 * Return: 0 on success, 1 on error.
 */

int main(int argc, char **argv)
{
	int sum; /* sum of arguments */
/*	int i, j;  counters for array of arguments */
	sum = 0;
	if (argc < 2)
		printf("%d\n", 0);

	if (argc < 1)
	{
		while (--argc > 0)
		{
		if (argc == 1)  /* if no number is passed to the program print 0 */
		{
			printf("%d\n", 0);
			return (0);
		}
		else if (isdigit(argv) && (atoi(*argv) > 0))
		{  /* check if **argv are digits AND positive numbers */
			sum += atoi(*argv);
			argv++;
		}
		else
		{
/* if not digits, print Error, followed by a new line, and return (1)   */
			printf("Error\n");
			return (1);
		}
		}
	}
	printf("%d\n", sum);
	return (0);
}
