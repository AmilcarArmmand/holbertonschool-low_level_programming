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

	new = malloc(sizeof(listint_t));    /* allocate new node */
	if (new == NULL)
		return (NULL);
	new->n = n;  /* add data */
	temp = *head;   /* temp variable used to traverse the linked list */
	if (idx == 0)
	{
		new->next = temp;
		*head = new;
	}
	else
	{
		i = 0;
		while (temp != NULL)
		{
			if (i == idx - 1)
				break;
			temp = temp->next;
			++i;
		}
		if (temp != NULL)
		{
/* Make pointer temp point to newly created node in the linked list */
			new->next = temp->next;
			temp->next = new;
		}
		else
		{
			free(new);
			return (NULL);
		}
	}
	return (new);
}
