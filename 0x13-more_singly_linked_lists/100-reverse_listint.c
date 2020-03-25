#include "lists.h"

/**
 * reverse_listint - a function that reverses a linstint_t linked list.
 * @head: a pointer to the head of the linked list.
 *
 * Return: a pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev;
	listint_t *current;
	listint_t *next;

	prev = NULL;
	current = *head;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		current = next;
	}
	*head = prev;
	return (*head);
}
