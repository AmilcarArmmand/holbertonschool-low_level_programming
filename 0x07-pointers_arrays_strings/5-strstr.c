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
	unsigned int hlen, nlen; /* length of *haystack and *needle  */
	char *haytemp;
	char *needletemp;

	for (hlen = 0, haytemp = haystack; *haytemp; haytemp++)
		hlen++;
	for (nlen = 0, needletemp = needle; *needletemp; needletemp++)
		nlen++;
	if (needle[0] == '\0' || hlen < nlen) /* if empty needle */
		return (NULL);
	for (i = 0; i < hlen; i++)
		for (j = 0; j < nlen; j++)
		{
			if (haystack[i] == needle[j])
				return (needle);
		}
	return (0);
/*	while (haystack != '\0' && haystack == needle) */
/*	if (haystack == NULL || needle[1] == '\0') */

}
