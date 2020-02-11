#include "holberton.h"

/**
 * _islower - a function that checks for a lowercase character
 * @c : char parameter
 *
 * Return: 1 if @c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	int tmp;

	if (c >= 'a' && c <= 'z')
		tmp = 1;
	else
		tmp = 0;

	return (tmp);
}
