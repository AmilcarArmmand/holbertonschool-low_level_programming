#include "search_algos.h"

/**
 * jump_list - searches sorted list of integers using Jump search algorithm
 *
 * @list: a pointer to the head of the list to search in
 * @size: number of nodes in the list
 * @value: the value to search for in the array
 *
 * Return: first index where value is located, or NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{

	size_t step;
	listint_t *prev, *curr;
	unsigned int i;

	if (list && size > 0)
	{
		/* block size to be jumped */
		step = sqrt(size);
		prev = list;
		curr = list;
		while (curr->next && curr->index < step)
			curr = curr->next;
		printf("Value checked at index [%lu] = [%d]\n", curr->index, curr->n);
		while (curr->next && curr->n < value)
		{
			prev = curr;
			for (i = 0; curr->next && i < step; i++)
				curr = curr->next;
			printf("Value checked at index [%lu] = [%d]\n", curr->index, curr->n);
		}
		printf("Value found between indexes ");
		printf("[%lu] and [%lu]\n", prev->index, curr->index);
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		while (prev->index < (size - 1) && prev->n < value)
		{

			prev = prev->next;
			if (prev == NULL)
				break;
			printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		}
		if (prev->n == value)
			return (prev);
	}
	return (NULL);
}
