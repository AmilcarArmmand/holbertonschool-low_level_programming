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
	int j;  /* counter for dest */

	for(i = 0, j = 0; src[i] != '\0'; i++, j++)
	{
		dest[j] = src[i];
	}
	dest[j++] = '\0';

	return (dest);
}
