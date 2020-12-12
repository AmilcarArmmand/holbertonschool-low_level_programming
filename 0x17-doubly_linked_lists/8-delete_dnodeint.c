#include "lists.h"

/**
 * delete_dnodeint_at_index - write a function that deletes the node at index
 * of a dlistint_t linked list.
 * @head: pointer to the head of the dlistint_t linked list
 * @index: index of the node that should be deleted
 *
 * Return: 1 (Exit_SUCCESS) or -1 (EXIT_FAILURE)
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp; /* pointer to node to be deleted */

	temp = *head;

	if (*head == NULL)
		return (-1);

	for (; index > 0; index--)
	{
		if (temp == NULL)
			return (-1);
		temp = temp->next;
	}

	if (temp == *head)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else  /* steps to set temp->prev->next to temp->next */
	{
		temp->prev->next = temp->next;
		if (temp->next != NULL) /* if temp is the last */
			temp->next->prev = temp->prev;
	}
	free(temp);

	return (1);
}
