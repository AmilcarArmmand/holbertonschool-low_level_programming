#include "holberton.h"

/**
 * puts_half - a function that prints half of a string
 * @str: pointer to string
 *
 * Return: void (No return value)
 */
void puts_half(char *str)
{
	char *p;
	int i; /* length of string */
	int j;

	p = str;
	while (*p != '\0')
		p++;

	i = p - str;
	if (i % 2 != 0)
		j = (i - 1) / 2;
	else
		j = i / 2;

	for (; j <= i && str[j] != '\0' ; j++)
		_putchar(str[j - 1]);

	_putchar('\n');
}