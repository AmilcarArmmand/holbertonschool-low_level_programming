#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a hash table
 * @size: the size of the array
 *
 * Return: a pointer to the created hash table or NULL (FAILURE)
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int i; /* index of nodes */

	/* if size is NULL */
	if (!size)
		return (NULL);

	/* create and allocate memory for hash table */
	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL || size <= 0)
		return (NULL);

	/* create and initialize the node in the table with NULL values */
	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ht->array[i] = NULL;
	}

	return (ht);
}
