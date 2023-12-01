#include "hash_tables.h"

/**
 * hash_table_print -  Func to print nodes in hash_table
 * @ht: table to print from
 *
 * Return: Always EXIT_SUCCESS.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	int flag = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (flag)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			flag++;
			node = node->next;
		}
	}
	printf("}\n");
}

