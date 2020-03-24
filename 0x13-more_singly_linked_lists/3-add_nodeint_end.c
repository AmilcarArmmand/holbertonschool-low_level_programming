#include "lists.h"

/**
 * add_nodeint_end - a function that adds a node to the end of listint_t list
 * @head: pointer to node of listint_t list
 * @n: data element of struct in listint_t
 *
 * Return: the address of the new element or NULL (Failure)
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *last;

/* allocate memory for the node */
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
/* add data */
	new->n = n;
/* node is going to be last so set the next of new node to NULL */
	new->next = NULL;
/* if list is empty make new the head */
	if (head == NULL)
	{
		*head = new;
		return (new);
	}
	last = *head;
	while (last->next != NULL)  /* traverse to last node of list */
	{
		last = last->next;
 /* change the next element of last node */
		last->next = new;
	}
	return (new);
}
