#include "holberton.h"

/**
 * rev_string - a function that reverses a string
 * @s: string that will be reversed
 *
 * Return: void (No return value)
 */
void rev_string(char *s)
{
	char temp;
	int len;
	int i;
	char *end;

	for (i = 0; s[i] != '\0'; s++)
		i++;

	len = i;
	end = s + len - 1;
	for (i = 0;  i < len / 2; i++)
	{
		temp = s[i];
		s[i] = end[len - 1 - i];
		end[len - 1 - i] = temp;
	}
}
