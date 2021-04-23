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
	listint_t *prev;
	listint_t *curr;
	unsigned int i;

	if (list == NULL)
		return (NULL);

	/* block size to be jumped */
	step = sqrt((int)size);
	prev = NULL;
	curr = list;

	while (curr->next && curr->n < value)
	{
		printf("Value checked array[%lu] = [%d]\n", curr->index, curr->n);
		prev = curr;
		for (i = 0; curr->next && i < step; i++)
			curr = curr->next;
		step += sqrt(size);
	}
	printf("Value found between indexes ");
	printf("[%lu] and [%lu]\n", prev->index, curr->index);
	i = prev->index - (int)sqrt(size);
	while (i < size && i <= prev->index)
	{
		printf("Value checked array[%d] = [%d]\n", i, prev->n);
		/* if element is found */
		if (prev->n == value)
			return (prev);
		i++;
	}

	return (NULL);

}
