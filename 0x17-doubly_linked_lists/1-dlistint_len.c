#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements in a linked list
 * @h: pointer to the head of the list
 *
 * Return: the number of elements in the dlistint_t list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes;

	nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
