#include "hash_tables.h"

/**
 * shash_table_create - a function that creates a hash table
 * @size: the size of the array
 *
 * Return: a pointer to the created hash table or NULL (FAILURE)
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int i;

	if (!size)
		return (NULL);

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	/* create hash table and initialize nodes to NULL */
	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
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


/**
 * slookup - function
 * @np: pointer to the current node of hash table
 * @key: key to check for in the hash table
 *
 * Return: pointer to the node or NULL
 */
shash_node_t *slookup(shash_node_t *np,  const char *key)
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
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node = NULL;
	shash_node_t *current = NULL;
	/* char *key_dup */
	char *duplicated_value;
	unsigned long int index;

	if (!ht || !key || *key == '\0' || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	current = (ht->array)[index];
	duplicated_value = malloc(strlen(value) + 1);
	if (duplicated_value == NULL)
		return (0);
	strcpy(duplicated_value, value);
	new_node = slookup(current, (const char *)key);
	if (new_node == NULL)
	{
		new_node = malloc(sizeof(hash_node_t));
		if (new_node == NULL)
		{
			free(duplicated_value);
			return (0);
		}
		new_node->key = malloc(strlen(key) + 1);
		if (new_node->key == NULL)
		{
			free(duplicated_value);
			free(new_node);
			return (0);
		}
		strcpy(new_node->key, key);
		new_node->next = current;
		(ht->array)[index] = new_node;
	}
	else
		free(new_node->value);
	new_node->value = duplicated_value;

	return (1);
}

/**
 * hash_table_get - a function that retrieves a value with a key.
 * @ht: the hash table to search
 * @key: the key to look for in the hash table
 *
 * Return: the value associated with the elelment, or NULL if key
 * is not found.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t  *node;

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

/**
 * hash_table_print - a function that prints a hash table
 * @ht: pointer to the hash table
 *
 * Return: No value returned, always successful
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;
	unsigned long int i;
	unsigned int comma_flag = 0;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (comma_flag == 1)
				printf(", ");

			node = ht->array[i];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			comma_flag = 1;
		}
	}
	printf("}\n");
}
/**
 * hash_table_print - a function that prints a hash table
 * @ht: pointer to the hash table
 *
 * Return: No value returned, always successful
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;
	unsigned long int i;
	unsigned int comma_flag = 0;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (comma_flag == 1)
				printf(", ");

			node = ht->array[i];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			comma_flag = 1;
		}
	}
	printf("}\n");
}

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: pointer to the hash table
 *
 * Return: No value returned.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *current = NULL;
	shash_node_t *temp = NULL;
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
