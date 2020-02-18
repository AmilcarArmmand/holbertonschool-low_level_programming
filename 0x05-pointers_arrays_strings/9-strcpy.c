#include "holberton.h"

/**
 * _strcpy - a function that copies a string including the '\0'
 * @dest: copy of string pointed to by src
 * @src: string to be copied
 *
 * Return: *_strcpy
 */
char *_strcpy(char *dest, char *src)
{
	int i;  /* counter for elements copied */

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i + 1] = src[i + 1];

	return (dest);
}
