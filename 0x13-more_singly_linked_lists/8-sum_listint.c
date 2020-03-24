#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all data (n) of a listint_t
 * @head: pointer to a node in listint_t
 *
 * Return: the sum of all teh data (n) in listint_t list
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
