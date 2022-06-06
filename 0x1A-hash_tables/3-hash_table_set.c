#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: is the hash table
 * @key: is the key
 * @value:is the value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index_hash;
	hash_node_t *new_node;

	if (!key)
		return (0);

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	index_hash = key_index((const unsigned char *)key, ht->size);
	new_node->key = (char *)key;
	new_node->value = strdup(value);

	if (ht->array[index_hash] == NULL)
	{
		new_node->next = NULL;
		ht->array[index_hash] = new_node;
		return (1);
	}
	new_node->next = ht->array[index_hash];
	ht->array[index_hash] = new_node;

	return (1);
}