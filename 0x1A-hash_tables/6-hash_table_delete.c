#include "hash_tables.h"

/**
 * free_hash_table - function that free linked list of hash tables
 * @hash_t: is the hash table
 */

void free_hash_table(hash_node_t *hash_t)
{
	if (hash_t == NULL)
		return;

	free_hash_table(hash_t->next);
	free(hash_t->value);
	free(hash_t->key);
	free(hash_t);
}

/**
 * hash_table_delete - deletes a hash table
 * @ht: is the hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
			free_hash_table(ht->array[i]);
	}
	free(ht->array);
	free(ht);
}
