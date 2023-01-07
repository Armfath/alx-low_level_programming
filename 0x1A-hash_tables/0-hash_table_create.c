#include "hash_tables.h"

/**
 * hash_table_create - create a new hash table
 *
 * @size: size of the hash table
 *
 * Return: a pointer to the newly created hash table or NULL
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *newHashTable = malloc(sizeof(hash_table_t));

	if (newHashTable == NULL)
	{
		return (NULL);
	}
	newHashTable->size = size;
	newHashTable->array = malloc(sizeof(hash_node_t *) * size);
	if (newHashTable->array == NULL)
	{
		free(newHashTable);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		newHashTable->array[i] = NULL;
	}

	return (newHashTable);
}
