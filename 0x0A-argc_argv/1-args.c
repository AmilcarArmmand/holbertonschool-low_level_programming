#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the number of arguments passed to it.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: number of arguments passed to main.
 */

int main(int argc, char **argv)
{
	int count;
	(void)argv;

	count = 0;
	while (count < argc - 1)
		count++;

	printf("%d\n", count);
	return (0);
}
