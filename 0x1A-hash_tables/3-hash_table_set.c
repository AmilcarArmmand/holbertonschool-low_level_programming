#include "hash_tables.h"

/**
 * lookup - function
 * @np: pointer to the current node of hash table
 * @key: key to check for in the hash table
 *
 * Return: pointer to the node or NULL
 */
hash_node_t *lookup(hash_node_t *np,  const char *key)
{
	for (; np != NULL; np = np->next)
		if (strcmp(key, np->key) == 0)
			return (np);
	return (NULL);
}

/**
 * hash_table_set - a function that adds an element to the hash table
 * @ht: pointer to the hash table to add or update
 * @key: key to the hash table
 * @value: value associated with the key
 *
 * Return: 1 (EXIT_SUCCESS) or 0 (EXIT_FAILURE)
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = NULL;
	hash_node_t *current = NULL;
	/* char *key_dup */
	char *duplicated_value;
	unsigned long int index;

	if (!ht || !key || *key == '\0' || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	current = (ht->array)[index];
	duplicated_value = strdup(value); /* copy string and check success */
	if (duplicated_value == NULL)
		return (0);
	new_node = lookup(current, (const char *)key);
	if (new_node == NULL)
	{
		new_node = malloc(sizeof(hash_node_t));
		if (new_node == NULL)
		{
			free(duplicated_value);
			return (0);
		}
		new_node->key = strdup(key); /* set key and value */
		if (new_node->key == NULL)
		{
			free(duplicated_value);
			free(new_node);
			return (0);
		}
		new_node->key = strdup(key);
		new_node->next = current;
		(ht->array)[index] = new_node;
	}
	else
		free(new_node->value);
	new_node->value = duplicated_value;

	return (1);
}
