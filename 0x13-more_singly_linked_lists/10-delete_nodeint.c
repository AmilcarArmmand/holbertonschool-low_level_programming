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

	temp = *head;
	if (!*head)
		return (-1);
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		if (temp->next == NULL)
			return (-1);
		temp = temp->next;
	}
	cursor = temp->next;
	temp->next = cursor->next;
	free(cursor);
	return (1);
}
