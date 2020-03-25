#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node at given postion.
 * @head: pointer to listint_t
 * @idx: the index ofthe list where the new node will be added
 * @n: data value if new node
 *
 * Return: the address of the new node or NULL (On Failure).
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *temp;
	unsigned int i;

	if (!head || !*head)
		return (NULL);
	temp = *head;
	new = malloc(sizeof(listint_t));  /* allocate new node */
	if (new == NULL)
		return (NULL);
	new->n = n;  /* add data */
	if (idx == 0)
	{
		new->next = temp;
		*head = new;
		return (new);
	}

	for (i = 1; i < idx - 1; i++)
	{
		if (temp->next == NULL)
			return (NULL);
		temp = temp->next;
	}
	new->next = temp->next;
	temp->next = new;

	return (new);
}
