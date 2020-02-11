#include "holberton.h"

/**
 * _isalpha - a function that checks for an alphabetic character
 * @c : integer value of ascii character
 *
 * Return: 1 if @c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	int tmp;

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		tmp = 1;
	else
		tmp = 0;

	return (tmp);
}
