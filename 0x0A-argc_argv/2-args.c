#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints all arguments it.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: number of arguments passed to main.
 */

int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
