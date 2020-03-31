#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: text file
 * @letters: the number of letter to be read and printed
 *
 * Return: the actual number of letters read and printed or 0 if file can not
 * be opened or read, if the filename is NULL, if write fails or does not write
 * the expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;   /* file descriptor */
	char *buffer;  /* buffer to store size_t letters */
	ssize_t peruse, transcribe; /* read and write amounts in ssize_t */
/* if the filename is NULL, return 0 */
	if (filename == NULL)
		return (0);
/* if the file can not be opened or read, return 0 */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	peruse = read(fd, buffer, letters);
	if (peruse == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
/* if write fails or does not write the expected amount of bytes, return 0 */
	transcribe = write(STDOUT_FILENO, buffer, letters);
	if (transcribe == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	if (peruse > transcribe)
		return (0);
	free(buffer);
	close(fd);
/* return the actual number of letters it could return and print */
	return (peruse);
}
