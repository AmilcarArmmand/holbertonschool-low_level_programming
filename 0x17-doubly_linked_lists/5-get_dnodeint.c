#include "lists.h"

/**
 * get_dnodeint_at_index - Write a function that returns the nth node
 * of a dlistint_t linked list.
 * @head: pointer to the head of a dlistint_t list
 * @index: the index of the node, starting from 0
 *
 * Return: pointer to the node at index or NULL if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (head == NULL)
		return (NULL);

	while (index != 0)
	{
		index--;
		if (head->next == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
