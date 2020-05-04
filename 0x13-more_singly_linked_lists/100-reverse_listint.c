#include "lists.h"

/**
 * reverse_listint - a function that reverses a linstint_t linked list.
 * @head: a pointer to the head of the linked list.
 *
 * Return: a pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *front;
	listint_t *tail;

	tail = NULL;

	if (head == NULL || *head == NULL)
		return (NULL);

	while ((*head)->next != NULL)
	{
		front = (*head)->next;
		(*head)->next = tail;
		tail = *head;
		*head = front;
	}
	(*head)->next = tail;
	return (*head);
}
