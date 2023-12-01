#include "hash_tables.h"

/**
 * hash_table_get - Func to fetch the value of a key in the hash table
 * @ht: hash table
 * @key: key required to get value
 *
 * Return: pointer to value if it exists, else NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp;
	unsigned long int index;

	if (key == NULL  || ht == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
