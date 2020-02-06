#include <stdio.h>

/**
 * main - function that prints the alphabet in lowercase then uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 'a'; num <= 'z'; num++)
		putchar(num);

	for (num = 'A'; num <= 'Z'; num++)
		putchar(num);

	putchar('\n');

	return (0);
}
