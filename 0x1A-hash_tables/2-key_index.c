#include "hash_tables.h"

/**
 * key_index - gives you the index key
 * @key: character key
 * @size: int size
 * Return: index of a key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long hash_value;

	hash_value = hash_djb2(key);
	return (hash_value % size);
}
