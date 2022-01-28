#include "hash_tables.h"

/**
 * hash_table_delete - delete hash table
 * @ht: hash table
 *
 * Return: table deleted
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			while (ht->array[i] != NULL)
			{
				temp = (ht->array[i])->next;
				free((ht->array[i])->key);
				free((ht->array[i])->value);
				free(ht->array[i]);
				(ht->array[i]) = temp;
			}
		}
	}
	free(ht->array);
	free(ht);
}
