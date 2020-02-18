#include "holberton.h"

/**
 * print_rev - a function that prints a string, in reverse, followed by new line
 * @s: the string to print in reverse
 * Return: void (No return data)
 */
void print_rev(char *str)
{
	int totalElementNumber;
	int i;

	totalElementNumber = 0;
	while (str[totalElementNumber] != '\0')
	{
		totalElementNumber++;
	}
	i = totalElementNumber - 1;
	for (;i >= 0; i--)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
