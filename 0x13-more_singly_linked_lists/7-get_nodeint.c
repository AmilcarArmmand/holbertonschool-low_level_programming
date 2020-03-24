#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node of listint_t
 * @head: pointer to node in listint_t
 * @index: index of nodes in linstint_t list
 *
 * Return: pointer to the index node or NULL (node does not exist)
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
/*	listint_t temp; */

	if (head == NULL)
		return (NULL);
/* go to the index node of list */
	for (i = 0; i < index; i++)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
	}
/* return pointer to that node */
	return (head);
}
