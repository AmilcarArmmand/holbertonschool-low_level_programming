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
	int length; /* counter for length of char pointer *str */
/*	list_t *beginning;  */
	list_t *newNode;
/* create and allocade memory for new node */
	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
/* put data in the node */
	newNode->str = strdup(str);
/* get length of newNode-str */
	for (length = 0; *(newNode->str + length); length++)
		;
	newNode->len = length;
	newNode->next = (*head);  /* make the next of new node as head */

	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}
/*	printf("[%d] %s\n", newNode->len, newNode->str); */
/* move the head to point to the new node */
	*head = newNode;

	return (*head);
}
