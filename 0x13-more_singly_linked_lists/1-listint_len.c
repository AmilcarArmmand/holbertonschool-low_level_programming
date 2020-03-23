#include "lists.h"

/**
 * listint_len - a function that return the number of nodes in a list
 * @h: pointer to the nodes in a listint_t
 *
 * Return: the number of nodes in listint_t
 */
size_t listint_len(const listint_t *h)
{
	int i;

	i = 0;
	while (h->next != NULL)
	{
		i++;
		h++;
	}
	return (i);
}
