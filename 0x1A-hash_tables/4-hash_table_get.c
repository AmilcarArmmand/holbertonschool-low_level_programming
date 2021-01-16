#include "hash_tables.h"

/**
 * hash_table_get - a function that retrieves a value with a key.
 * @ht: the hash table to search
 * @key: the key to look for in the hash table
 *
 * Return: the value associated with the elelment, or NULL if key
 * is not found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t  *node;

	if (!ht || !key || *key == '\0')
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node && strcmp(node->key, key) != 0)
		node = node->next;
	if (node == NULL)
		return (NULL);

	return (node->value);
}
