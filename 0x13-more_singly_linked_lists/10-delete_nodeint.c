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
	listint_t *temp; /* pointer to node to delete */
	listint_t *cursor; /* pointer to node to traverse the list */

	temp = *head;
	cursor = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	for (; index > 0; index--)
	{
		if (temp->next == NULL)
			return (-1);
		temp = temp->next;
	}

	temp = cursor->next;
	cursor->next = temp->next;
	free(temp);

	return (1);
}
