#include "holberton.h"

/**
 * main - Prints Holberton to standard output
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char hbtn[9] = "Holberton";
	int i;

	for (i = 0; i < 9 ; i++)
		_putchar(hbtn[i]);

	_putchar('\n');

	return (0);
}
