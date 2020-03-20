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
	list_t *newNode;
/* create and allocade memory for new node */
	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
/* put data in the node */
	newNode->str = strdup(str);
	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}
/* get length of newNode-str */
	for (length = 0; *(newNode->str + length); length++)
		;
	newNode->len = length;
if


/* make the next of new node as head */
	(newNode->next) = (*head);
/* move the head to point to the new node */
	*head = newNode;

	return (*head);
}
