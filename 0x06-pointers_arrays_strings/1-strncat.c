#include "holberton.h"

/**
 * _strncat - a function that concatenates two strings
 * @dest: first string
 * @src: secong string
 * @n: number of bytes from src
 *
 * Return: a pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len1;
	int len2;

	for (len1 = 0; dest[len1] != '\0'; len1++)
		;
	for (len2 = 0; src[len2] != '\0'; len2++)
		;
	for (i = 0; i < n && i <= len2; i++)
	{
		dest[len1 + i] = src[i];
	}
	dest[len1 + i + 2] = '\0';

	return (dest);
}
