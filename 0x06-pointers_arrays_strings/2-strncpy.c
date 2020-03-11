#include "holberton.h"

/**
 * _strncpy - a function that copies a string
 * @dest: string to be copied over
 * @src: string to be copied
 * @n: number of bytes to copy into dest
 *
 * Return: pointer to a new string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
