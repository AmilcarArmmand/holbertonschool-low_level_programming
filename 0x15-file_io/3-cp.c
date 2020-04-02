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
	int fd_from, fd_to;   /* file descriptors */
	ssize_t read_from, write_to;
	char *buffer[BUFSIZ];

	if (ac != 3) /* check for number of arguments */
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}
	fd_from = open(av[1], O_RDONLY);
	if (fd_from  == -1)  /* open fd_from and check for success */
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd_to = open(av[2], O_TRUNC | O_WRONLY | O_CREAT, 0644);
	if (fd_to == -1)  /* open or create fd_to and check for success  */
	{  /* check that file_from exists with right permissions  */
		close(fd_from);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	read_from = read(fd_from, buffer, BUFSIZ);
 /* loop reads to buffer & writes from buffer */
	while ((read_from = read(fd_from, buffer, BUFSIZ)) > 0)
	{
		write_to = write(fd_to, buffer, read_from);
		if (write_to != read_from) /* check if copy succeeded */
		{
			close(fd_from);
			close(fd_to);
			exit(99);
		}
	}
	close(fd_from); /* close file_from and file_to and check for success  */
	close(fd_to);
	if ((close(fd_from) == -1) || (close(fd_to) == -1))
		exit(100);
	return (0);
}
