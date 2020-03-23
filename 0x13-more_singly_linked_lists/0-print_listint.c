#include "lists.h"

/**
 * print_listint - Write a function that prints all the elements of a listint_t
 * @h: pointer to nodes in the listint_t
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int i;

	i = 0;
	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h++;
	}

	return (i);
}
