#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *table = ht;
	hash_node_t *node, *next;
	unsigned long int i;

	if (ht)
		for (i = 0; i < ht->size; i++)
			if (ht->array[i])
			{
				node = ht->array[i];
				next = node;
				while (next)
				{
					node = next;
					next = node->next;
					free(node->key);
					free(node->value);
					free(node);
				}
			}

	free(table->array);
	free(table);
}
