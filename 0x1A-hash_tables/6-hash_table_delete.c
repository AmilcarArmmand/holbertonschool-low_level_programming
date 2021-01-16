#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: pointer to the hash table
 *
 * Return: No value returned.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current = NULL;
	hash_node_t *temp = NULL;
	unsigned long int index;

	if (ht == NULL)
		return;
	for (index = 0; index < ht->size; index++)
	{
		current = (ht->array)[index];
		while (current)
		{
			temp = current;
			current = current->next;
			free(temp->value);
			free(temp->key);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
