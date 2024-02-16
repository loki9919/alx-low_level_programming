#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * Return: a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashtable;

	hashtable = malloc(sizeof(hash_table_t));
	if (!hashtable)
		return (NULL);

	hashtable->size = size;
	hashtable->array = calloc(size, sizeof(hash_node_t *));
	if (!(hashtable->array))
	{
		free(hashtable);
		return (NULL);
	}
	return (hashtable);
}
