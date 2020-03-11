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

int main(int argc, char *argv[])
{
	int sum; /* sum of arguments */
	int i;

	sum = 0;

	if (argc < 2)
		printf("%d\n", 0);
	else
	{
		while (--argc > 0)
		{
			for (i = 1; *argv[i]; i++)
			{
				if (isdigit(*argv[i]) && (atoi(*argv) > 0))
				{
					sum += atoi(*argv);
					argv++;
				}
				if (!(isdigit(*argv[i])))
				{
					printf("Error\n");
					return (1);
				}
				printf("%d\n", sum);
			}
		}
	}
	return (0);
}
