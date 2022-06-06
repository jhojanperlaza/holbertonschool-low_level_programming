#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht: is the hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	unsigned long int last_index = 0;

	if (!ht)
		return;

	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
			last_index = i;
		i++;
	}
	if (last_index == 0)
	{
		printf("{}\n");
		return;
	}
	i = 0;
	printf("{");
	while (i < ht->size)
	{
		if (ht->array[i] != NULL && i != last_index)
		{
			printf("\'%s\': \'%s\', ", ht->array[i]->key, ht->array[i]->value);
		}
		else if (i == last_index)
		{
			printf("\'%s\': \'%s\'", ht->array[i]->key, ht->array[i]->value);
		}
		i++;
	}
	printf("}\n");
}
