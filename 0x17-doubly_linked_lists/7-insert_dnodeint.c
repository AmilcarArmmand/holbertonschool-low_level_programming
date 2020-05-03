#include "lists.h"

/**
 * insert_dnodeint_at_index - Write a function that inserts a new node at
 * a given position.
 * @h: pointer to the head of a dlistint_t list
 * @idx: index of the list where the new node will be added
 * @n: data to store in the new node
 *
 * Return: address of the new node or NULL if it is not possible to add node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *temp;

	temp = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx > 1; idx--)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
	}

	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	new->prev = temp;
	new->next = temp->next;

	temp->next->prev = new;
	temp->next = new;

	return (new);
}
