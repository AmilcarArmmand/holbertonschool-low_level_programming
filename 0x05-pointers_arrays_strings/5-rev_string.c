#include "holberton.h"

/**
 * rev_string - a function that reverses a string
 * @s: string that will be reversed
 *
 * Return: void (No return value)
 */
void rev_string(char *s)
{
	char *tmp;
	int length;
	int i;

	tmp = s;
	while (*tmp != '\0')
		tmp++;
	length = tmp - s;
	for (i = 0;  i < length && s[i] != '\0'; i++)
	{
		tmp[i] = s[i];
	}
	for (i = 0; i < length && s[i] != '\0'; i++)
		s[i] = tmp[(length - 1) - i];

}
