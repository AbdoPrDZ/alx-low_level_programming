#include "hash_tables.h"

/**
 * hash_table_print - print a hash table
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	int first = 1;

	if (ht)
	{
		putchar('{');
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i])
			{
				node = ht->array[i];

				while (node)
				{
					if (!first)
						printf(", ");
					else
						first = 0;
					printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
					node = node->next;
				}
			}
		}
		printf("}\n");
	}
}
