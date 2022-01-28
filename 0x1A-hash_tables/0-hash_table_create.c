#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * hash_table_create - create an hash table
 * @size: size of the table
 *
 * Return: table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));
	unsigned long int i = 0;

	if (table == NULL)
	{
		return (NULL);
	}

	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);

	if (table->array == NULL)
	{
		return (NULL);
	}

	while (i < size)
	{
		table->array[i] = NULL;
		i++;
	}

	return (table);
}
