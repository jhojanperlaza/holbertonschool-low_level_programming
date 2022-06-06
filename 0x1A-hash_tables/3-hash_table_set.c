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
	hash_node_t *p_aux;

	if (!key)
		return (0);
	if (!*key || *key == ' ' || !ht)
		return (0);

	index_hash = key_index((const unsigned char *)key, ht->size);
	p_aux = ht->array[index_hash];
	while (p_aux != NULL)
	{
		if (strcmp(p_aux->key, key) == 0)
		{
			free(p_aux->value);
			p_aux->value = strdup(value);
			return (1);
		}
		p_aux = p_aux->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index_hash];
	ht->array[index_hash] = new_node;

	return (1);
}
