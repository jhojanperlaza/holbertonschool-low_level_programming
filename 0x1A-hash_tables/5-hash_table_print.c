#include "hash_tables.h"
#include <stdbool.h>

/**
 * is_table_empty - function that prints a hash table.
 * @ht: is the hash table
 * Return: last index of the hash table
 */

long int is_table_empty(const hash_table_t *ht)
{
	unsigned long int i = 0;
	unsigned long int last_index = 0;
	bool hash_table_empty = true;

	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			last_index = i;
			hash_table_empty = false;
		}
		i++;
	}
	if (last_index == 0 && hash_table_empty == true)
	{
		printf("{}\n");
		return (-1);
	}
	return (last_index);
}

/**
 * hash_table_print - function that prints a hash table.
 * @ht: is the hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	unsigned long int last_index = 0;
	hash_node_t *p_aux;

	if (!ht)
		return;

	last_index = is_table_empty(ht);
	if ((long int)last_index < 0)
		return;
	printf("{");
	while (i < ht->size)
	{
		p_aux = ht->array[i];
		if (p_aux != NULL && i != last_index)
		{
			while (p_aux)
			{
				printf("\'%s\': \'%s\', ", p_aux->key, p_aux->value);
				p_aux = p_aux->next;
			}
		}
		else if (i == last_index)
		{
			while (p_aux)
			{
				printf("\'%s\': \'%s\'", p_aux->key, p_aux->value);
				p_aux = p_aux->next;
			}
		}
		i++;
	}
	printf("}\n");
}
