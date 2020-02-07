#include <stdio.h>

/**
 * main - function that prints all singe digits of base 10
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i;

	i = '0';
	while (i <= '9')
	{
		putchar(i);
		i++;
	}

	putchar('\n');

	return (0);
}
