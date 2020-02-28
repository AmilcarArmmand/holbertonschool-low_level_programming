#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints its name, followed by a new line.
 * @argc: argument count
 * @argv: pointer to string of argument vectors.
 *
 * Return: 0 (EXIT_SUCCESS)
 */

int main(int argc, char **argv)
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
