#include "hash_tables.h"

/**
 * key_index - a function that gives the index of a key
 * @key: the key of the index in the hash table
 * @size: the size of the array in the hash table
 *
 * Return: the index at which the key/value should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
