#include "hash_tables.h"

/**
 * hash_table_get - that retrieves a value associated with a key.
 * @ht: is the hash table
 * @key: is the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index_hash;
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
			return (p_aux->value);

		p_aux = p_aux->next;
	}
	return (NULL);
}
