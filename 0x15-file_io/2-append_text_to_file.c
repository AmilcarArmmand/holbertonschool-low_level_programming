#include "holberton.h"

/**
 * append_text_to_file - a fudntion that appends text to the end of a file
 * @filename: the name of the file
 * @text_content: the NULL terminated string to add to the end of the file
 *
 * Return: 1 (SUCCESS) and -1 (FAILURE)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;   /* file descriptor */
	ssize_t writ;

	if (filename == NULL)
		return (-1);
/* if file exists, append text to the end of the file */
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		writ = write(fd, text_content, _strlen(text_content));
		if (writ != _strlen(text_content))
		{
			close(fd);
			return (-1);
		}
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
