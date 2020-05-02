#include "lists.h"

/**
 * add_dnodeint - Write a function that adds a new node at the beginning of a
 * dlistint_t list.
 * @head: pointer to the head of the list
 * @n: data to store in new node
 *
 * Return: pointer to the address of the new element or NULL (failure)
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new || !head)
		return (NULL);
	new->n = n;

	new->next = (*head);
	new->prev = NULL;
	*head = new;

	return (*head);
}
