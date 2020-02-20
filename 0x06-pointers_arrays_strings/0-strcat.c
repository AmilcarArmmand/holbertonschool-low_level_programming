#include "holberton.h"

/**
 * _strcat - a function that concatenates two strings
 * @dest: the string being appended and returned to main
 * @src: the string to be appended to dest
 *
 * Return: a pointer to the resulting string 'dest'
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int len1; /* length of dest */
	int len2; /* length of src */

	for (len1 = 0; dest[len1] != '\0'; len1++)
		;
	for (len2 = 0; src[len2] != '\0'; len2++)
		;

	for (i = 0; i < len2; i++)
		dest[len1 + i] = src[i];

	dest[len1 + len2 + 1] = '\0';

	return (dest);
}
