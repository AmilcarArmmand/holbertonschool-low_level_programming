#include "holberton.h"

/**
 * create_file - a function that creates a file
 * @filename: the name of the file to create
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 (SUCCESS) or -1 (FAILURE) file can not be created, file can not be
 * written, write fails
 */
int create_file(const char *filename, char *text_content)
{
	int fd;   /* file descriptor */
	ssize_t writ;

	if (filename == NULL)
		return (-1);

/* create file with 0600 permissions, if file exists, truncate */
	fd = open(filename, O_TRUNC | O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
/* text_content is NULL create empty file */
	if (text_content == NULL)
		text_content = "";

/* get the size of text_content with _strlen */
	writ = write(fd, text_content, _strlen(text_content));

/* if write fails, return -1 */
	if (!writ)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
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
