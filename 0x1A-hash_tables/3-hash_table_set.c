#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>

/**
 * hash_table_set - adds an element to the hash table
 * @ht! the hash table
 * @key: the key
 * @value: he value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *ckey, *cvalue;
	hash_node_t *new;
	unsigned long int i, index;

	if (!ht || !key || strlen(key) == 0)
		return (0);

	cvalue = strdup(value);
	if (!cvalue)
		return (0);

	index = key_index((const unsigned char *) key, ht->size);
	for (i = index; i < ht->size && ht->array[i]; i++)
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			ht->array[i]->value = cvalue;
			return (1);
		}

	new = malloc(sizeof(hash_node_t));
	if (!new)
	{
		free(cvalue);
		return (0);
	}

	ckey = strdup(key);
	if (!ckey)
	{
		free(cvalue);
		free(new);
		return (0);
	}
	new->key = ckey;
	new->value = cvalue;
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
