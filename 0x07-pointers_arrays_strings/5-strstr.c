#include "holberton.h"

/**
 * _strstr - a function taht locates a substring.
 * @haystack: pointer to a string to search for substring.
 * @needle: pointer to a substring.
 *
 * Return: a pointer to the substring.
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j; /* counters for *haystack and *needle */
/*	char *hay;  */
/*	char *need;  */

/*	hay = haystack; */
/*	need = needle;  */

	for (i = 0; haystack[i]; i++)  /* same as *(hay + i)  */
	{
		for (j = 0; needle[j]; j++)  /* same as *(need + J) */
		{
			if (*(haystack + i + j) != '\0' && haystack[i + j] != needle[j])
			{
				break;
			}
		}
		if (needle[j] == '\0')
			return (haystack + i);
	}
	return (0);
}
