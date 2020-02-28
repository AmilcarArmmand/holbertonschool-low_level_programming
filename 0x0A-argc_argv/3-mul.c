#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers.
 * @argc: argument count
 * @argv: argument vector containing two numbers.
 *
 * Return: 0 (Success) or 1 (Failure)
 */

int main(int argc, char **argv)
{
	int prod;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		prod = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", prod);
	}
	return (0);
}
