#include "lists.h"

/**
 * free_dlistint - Write a function that free a dlistint_t list
 * @head: pointer to the head of the list
 *
 * Return: void (No data returned)
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		temp = head;
		head = temp->next;
		free(temp);
	}
}
