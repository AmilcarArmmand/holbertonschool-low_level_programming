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

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	temp = *h;
	if (idx == 0)
	{
		new->next = temp;
		*h = new;
		new->prev = NULL;
	}

	while (temp != NULL && idx > 0)
	{
		idx--;
		if (idx - 1 == 0)
		{
			new->next = temp->next;
			temp->next = new;
			new->prev = temp;
		}
		temp = temp->next;
	}

	return (new);
}
