#include "hash_tables.h"

/**
 * hash_table_print - a function that prints a hash table
 * @ht: pointer to the hash table
 *
 * Return: No value returned, always successful
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
/*	unsigned int print_comma_flag = 0; */

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			/*   */

			node = ht->array[i];
			while (node)
			{
				if (node)
					printf(", ");
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
			}
		}
	}
	printf("}\n");
}
