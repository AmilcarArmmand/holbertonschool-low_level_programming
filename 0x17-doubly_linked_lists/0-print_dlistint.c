#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a dlistint_t list
 * @h: pointer to the head of dlistint_t
 *
 * Return: the number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes; /* number of nodes in the list */

	nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}

	return (nodes);
}
