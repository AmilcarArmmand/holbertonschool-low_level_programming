#include "holberton.h"
#include <unistd.h>

/**
 * main - a program that copies the contents of a file to another file
 * @ac: the number of arguments
 * @av: the program name, file_from, and file_to
 *
 * Return: 0 (SUCCESS) or exit(98)
 */
int main(int ac, char *av[])
{
	int file_from, file_to;   /* file descriptors */
	ssize_t rd, writ;
	char *buffer[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", av[0]);
		exit(98);
	}
	file_from = open(av[1], O_RDONLY);
	if (file_from  == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	file_to = open(av[2], O_TRUNC | O_WRONLY | O_CREAT, 0644);
	if (file_to == -1)
	{
		close(file_from);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(98);
	}
	rd = read(file_from, buffer, 1024);
	writ = write(file_to, buffer, rd);
	while (rd > 0)
		if (writ != rd)
		{
			exit(99);
		}
	close(file_from);
	close(file_to);
	return (0);
}

/**
 * _strlen - a function that returns the length of a string
 * @s: pointer to string s
 * Return: length of the string
 */
int _strlen(char *s)
{
	int n;

	for (n = 0; s[n] != '\0'; n++)
		;
	return (n);
}
