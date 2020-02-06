#include <stdio.h>

/**
 * main - function that prints the alphabet from a to z except letters q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 'a'; num <= 'z'; num++)
	{
		if (num != 'q' || num != 'e')
		putchar(num);
	}
	putchar('\n');

	return (0);
}
