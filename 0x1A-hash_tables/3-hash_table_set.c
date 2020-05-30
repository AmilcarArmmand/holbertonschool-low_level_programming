#include "hash_tables.h"

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
	hash_node_t *new_node;
	char *duplicated_value;
	unsigned long int i = 0; /* index of linked list */
	unsigned long int key_location;

	/* check failure for ht, key, value and key not empty string */
	if (!ht || !key || key == '\0' || !value)
		return (0);
	/* copy value into new string and check success */
	duplicated_value = strdup(value);
	if (!duplicated_value)
		return (0);
	printf("key: %s value: %s\n", key, duplicated_value);
	/* check exist [i] element of the in hash table */
	key_location = key_index((unsigned char *)key, ht->size);
	printf("%lu %lu\n", key_location, key_index((unsigned char *)key, ht->size));
	for (i = key_location; ht->array[i]->key; i++)
	{ /* if [i] element is NULL set ht->array[i] = dup_value and exit 1 */
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			ht->array[i]->value = duplicated_value;
		}
	}
	printf("%s\n", ht->array[i]->value);

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
	{
		free(duplicated_value);
		return (0);
	}
	new_node->key = strdup(key); /* set key and value */
	if (!new_node->key)
	{
		free(duplicated_value);
		free(new_node);
		return (0);
	}
	new_node->value = duplicated_value;
	new_node->next = (ht->array)[i];
	ht->array[i] = new_node;
	return (1);
}
