#include "lists.h"

/**
 * add_nodeint - a function that adds a new node to beginning of a listint_t
 * @head: pointer to the first node in listint_t
 * @n: data element of node in listint_t
 *
 * Return: pointer to the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);
/* allocate new node */
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
/* put data in new node */
	new->n = n;
/* make next of new node as head */
	new->next = *head;
/* move the head to point to the new node */
	*head = new;
	return (new);
}
