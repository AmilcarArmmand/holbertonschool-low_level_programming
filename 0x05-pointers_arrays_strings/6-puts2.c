#include "holberton.h"

/**
 * puts2 - A function that prints every other character of a string
 * @str: string agrument
 *
 * Return: void (No value returned)
 */
void puts2(char *str)
{
	int i;

	for (i = 0; *str != '\0'; i++, str++)
	{
		if ((i % 2) == 0)
			_putchar(*str);
	}
	_putchar('\n');
}
