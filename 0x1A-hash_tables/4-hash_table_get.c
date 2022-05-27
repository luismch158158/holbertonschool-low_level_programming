#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key.
 *
 * @ht: is the hash table you want to look into
 * @key: is the key you are looking for
 *
 * Return: the value associated with the element, or NULL
 * if key couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	char *value = NULL;
	unsigned long int index = 0;
	hash_node_t *node = NULL, *tmp = NULL;

	if (!ht || !(ht->array) || !key)
		return (value);

	index = key_index((unsigned char *)key, ht->size);

	node = ht->array[index];
	if (!node)
		return (value);

	if (strcmp(node->key, key) == 0)
	{
		value = node->value;
		return (value);
	}

	for (tmp = node; tmp; tmp = tmp->next)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			value = tmp->value;
			return (value);
		}
	}

	return (value);
}
