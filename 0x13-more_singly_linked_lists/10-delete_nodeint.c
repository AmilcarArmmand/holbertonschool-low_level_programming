#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes a node
 * @head: pointer to the head of listint_t
 * @index: index of the node to delete
 *
 * Return: 1 (Success) or -1 (Failed)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp; /* pointer to node that needs to be removed */
	listint_t *cursor;

	if (head == NULL)
		return (-1);
	temp = *head; /* node to delete at index */
	cursor = *head; /* variable used to traverse the linked list */
	if (index == 0 && *head == NULL)
		return (-1);
	if (index == 0 && temp->next == NULL)
	{
		*head = NULL;
		free(temp);
		return (1);
	}
	else
	{
		i = 0;
		while (cursor != NULL)
		{
			if (i == index - 1)
				break;
			temp = temp->next, cursor = cursor->next;
			i++;
		}
		if (cursor == NULL)
			return (-1);
		temp = cursor->next;
		cursor->next = temp->next;
		temp->next = NULL;
		free(temp);
		if (cursor->next == NULL)
			cursor->next = NULL;
		return (1);
	}
}
