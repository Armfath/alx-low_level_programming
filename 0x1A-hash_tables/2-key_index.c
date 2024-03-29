#include "hash_tables.h"

/**
 * key_index - gives the index of a given key
 *
 * @key: the given key
 * @size: size of the hash table
 *
 * Return: the index where the pair key-value should be stored
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
