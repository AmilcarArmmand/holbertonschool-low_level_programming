#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list
 * @head: a pointer to an element in listint_t
 *
 * Return: void (No data return type)
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (head)
	{
		temp = head;
		head = temp->next;
		free(temp);
	}
}
