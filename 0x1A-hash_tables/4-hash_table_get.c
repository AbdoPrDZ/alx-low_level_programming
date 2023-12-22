#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - retrieving a value associated with a key
 * @ht: the hash table
 * @key: the key you are looking for
 * Return: the value, or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i, index;

	if (ht && key && strlen(key) != 0)
	{
		index = key_index((const unsigned char *)key, ht->size);
		for (i = index; i < ht->size && ht->array[i]; i++)
			if (strcmp(ht->array[i]->key, key) == 0)
				return (ht->array[i]->value);
	}

	return (NULL);
}
