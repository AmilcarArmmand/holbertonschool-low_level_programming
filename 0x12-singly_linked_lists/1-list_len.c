#include "lists.h"

/**
 * list_len - a function that returns the number of elements in a linked
 * @h: pointer to a list a structs
 *
 * Return: the number of elements in the list.
 */
size_t list_len(const list_t *h)
{
/* create a variable of size_t to keep track of number of structs */
	size_t n;

	n = 0; /* initialize it to 0 */
/* check that the struct exists and does not contain NULL */
	while (h != NULL)
	{
		h = h->next; /* go to the next struct */
		n++;  /* add count of structs by 1 */
	}
	return (n);
}
