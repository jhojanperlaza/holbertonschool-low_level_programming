#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key.
 * @size: is the size of the array.
 * @key: is the key
 *
 * Return: the index at which the key/value
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index_hash;

	index_hash = hash_djb2(key);
	while (index_hash >= size)
		index_hash = rand() % index_hash;
	/**index_hash = index_hash / 10; */
	return (index_hash);
}
