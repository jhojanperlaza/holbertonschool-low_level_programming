#include "hash_tables.h"

/**
 * hash_table_create -  function that creates a hash table.
 * @size: is the size of the array.
 *
 * Return: a pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_has_table;
	unsigned long int i = 0;

	new_has_table = malloc(sizeof(hash_table_t));
	if (!new_has_table)
		return (NULL);

	new_has_table->size = size;
	new_has_table->array = malloc(size * sizeof(new_has_table->array));
	if (!new_has_table->array)
		return (NULL);

	while (i < size)
	{
		new_has_table->array[i] = NULL;
		i++;
	}

	return (new_has_table);
}
