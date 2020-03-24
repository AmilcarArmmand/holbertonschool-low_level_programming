#include "lists.h"

/**
 * pop_listint - function that deletes head node and returns its data(n).
 * @head: pointer to a lintint_t
 *
 * Description: function that deletes that head node of a linstint_t list and
 * returns the head node's data(n).
 * Return: value of head data(n) or 0 if list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	n = 0;
	if (*head == NULL)
		return (0);
	n = (*head)->n;
/* set temp to pointer to head node */
	temp = *head;
/* set *head to temp->next */
	*head = temp->next;
/* free node being deleted */
	free(temp);

	return (n);
}
