#include "hash_tables.h"
/**
 * key_index - To fetch index of a key
 * @key: the key string
 * @size: size of the hash table
 *
 * Return: index of key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int key_in;

	key_in = (hash_djb2(key) % size);
	return (key_in);
}
