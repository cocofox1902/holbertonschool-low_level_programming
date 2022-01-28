#include "hash_tables.h"

/**
 * hash_table_print - print table
 * @ht: hash table
 *
 * Return: table print
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *n;
	unsigned long int i;
	unsigned char sep = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			n = ht->array[i];
			while (n != NULL)
			{
				if (sep != 0)
					printf(", ");
				printf("'%s': '%s'", n->key, n->value);
				sep += 1;
				n = n->next;
			}
		}
	}
	printf("}\n");
}
