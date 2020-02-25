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
/*	unsigned int i, j;  counters for *haystack and *needle */
/*	unsigned int hlen, nlen;  length of *haystack and *needle  */
	char *haytemp;
	char *needletemp;
/*	for (hlen = 0, haytemp = haystack; *haytemp; haytemp++) */
/*		hlen++; */
/*	for (nlen = 0, needletemp = needle; *needletemp; needletemp++) */
/*		nlen++; */
	while (*haystack != '\0')
	{
		haytemp = haystack;
		needletemp = needle;
		while (*haytemp == *needletemp && haytemp != '\0' && needletemp != '\0')
		{
			haytemp++;
			needletemp++;
		}
		if (*needletemp != '\0')
			return (haytemp);
	}
	return (NULL);
}
