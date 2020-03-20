#include "lists.h"

/**
 * add_node - a function that adds a new node at the beginning of a list_t list
 * @head: pointer to the first element in list_t list.
 * @str: pointer to the first element in each node.
 *
 * Return: pointer to the head of list_t list
 */
list_t *add_node(list_t **head, const char *str)
{
/* create and allocade memory for new node */
	list_t *new_node;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
/* put data in the node */
	while (head != NULL)
	{
		new_node->str = strdup(str);
		if ((!new_node))
		{
			free(new_node);
			return (NULL);
		}
	}
/* make the ->next of the new node as head */
	new_node->next = *head;

/* move the head to point to the new node */
	*head = new_node;

	return (new_node);
}
