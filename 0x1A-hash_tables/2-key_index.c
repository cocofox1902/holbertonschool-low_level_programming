#include "hash_tables.h"

/**
 * key_index - the index of the key
 * @key: the key
 * @size: the size
 *
 * Return: the index of the size
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
