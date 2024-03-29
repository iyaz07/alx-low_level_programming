#include "hash_tables.h"

/**
 * hash_table_create - creates a new hash table of size 'size'
 * @size: size of the array(hash table)
 *
 * Return: pointer to newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_t;
	unsigned long int i;

	new_t = malloc(sizeof(hash_table_t));

	if (new_t == NULL)
		return (NULL);

	new_t->size = size;
	new_t->array = malloc(sizeof(hash_node_t *) * size);

	if (new_t->array == NULL)
	{
		free(new_t);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		new_t->array[i] = NULL;

	return (new_t);
}
