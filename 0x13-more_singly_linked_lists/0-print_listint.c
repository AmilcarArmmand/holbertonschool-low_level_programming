#include "lists.h"

/**
 * print_listint - Write a function that prints all the elements of a listint_t
 * @h: pointer to nodes in the listint_t
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i;

	i = 0;
	if (h == NULL)
		return (i);
	while (h)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
