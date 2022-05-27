#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 *
 * @size: size of the array
 *
 * Return: pointer to the newly created hash table
 * if somenthing went wrong, your function should return NULL
 *
 */


hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash = malloc(sizeof(hash_table_t));
	unsigned long int i = 0;

	if (new_hash == NULL)
		return (NULL);
	new_hash->size = size;

	new_hash->array = malloc(sizeof(hash_node_t *) * size);
	if (new_hash->array == NULL)
	{
		free(new_hash);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		new_hash->array[i] = NULL;

	return (new_hash);
}
