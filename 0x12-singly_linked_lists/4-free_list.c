#include "lists.h"

/**
 * free_list - a function that frees a list_t list
 * @head: pointer to a list_t
 *
 * Return: void (No data type returned)
 */
void free_list(list_t *head)
{
	list_t *temp;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		temp = head;
		head = temp->next;
		free(temp->str);
		free(temp);
	}
}
