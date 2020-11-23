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
	int sum;

	sum = 0;

	if (argc < 2)
		printf("%d\n", 0);
	else
	{
		while (argc-- > 1)
		{
			if (isdigit(*argv[argc]))
			{
				sum += atoi(argv[argc]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
