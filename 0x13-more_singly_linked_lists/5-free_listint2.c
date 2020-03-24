#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list
 * @head: pointer to a node in linstint_t
 *
 * Description: function sets the head to NULL.
 * Return: void (No data return type)
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
	}
	head = NULL;
}
