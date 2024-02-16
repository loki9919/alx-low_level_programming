#include "hash_tables.h"

/**
 * hash_table_set - Add or update an element in a hash table
 * @ht: A pointer to the hash table
 * @key: The key to add - cannot be an empty string
 * @value: The value associated with key
 * Return: Upon failure - 0 Otherwise - 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	char *valuecp;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	valuecp = strdup(value);
	if (valuecp == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = valuecp;
			return (1);
		}
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(valuecp);
		return (0);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = valuecp;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
