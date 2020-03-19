#include "lists.h"

/**
 * print_list - a function that prints all the elements of a list_t list.
 * @h: pointer to a list
 *
 * Return: the number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
/* create a variable of size_t to keep track of number of structs */
	size_t n;

	n = 0; /* initialize it to 0 */
/* check that the struct exists and does not contain NULL */
	while (h != NULL)
	{
		if (h->str == NULL) /* if element h->str is NULL, print nil */
			printf("[0] (nil)\n");
		else  /* else print the len and str elements of structs  */
			printf("[%d] %s\n", h->len, h->str);
		h = h->next; /* go to the next struct */
		n++;  /* add count of structs by 1 */
	}
	return (n);
}
