#include "lists.h"

/**
 * add_node_end - a function that adds a new node at the end of a list_t list
 * @head: pointer to the first list_t element
 * @str: element of list_t in list
 *
 * Return: pointer to the node at the end of the list or NULL (Failure)
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int length; /* counter for length of char pointer *str */
	list_t *new;

/* allocade memory for new node */
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
/* put data in the node */
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
/* get length of newNode->str and assign to len */
	for (length = 0; *(new->str + length); length++)
		;
	new->len = length;
/* make the next of new node as NULL (tail) */
	new->next = NULL;
/* if list is empty, make newNode head */
	if (*head == NULL)
	{
		*head = new;
/*		printf("head was NULL is now %s\n", new->str); */
		return (*head);
	}
	else
	{
		(*head)->next = add_node_end(&(*head)->next, str);
	}
	return (*head);
}
