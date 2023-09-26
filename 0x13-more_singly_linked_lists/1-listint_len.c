#include "lists.h"
#include <stdio.h>
/**
 * listint_len - A function that prints all the elements in the list
 * @h: A pointer to listint structure
 * Return: the number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		node_count++;
		h = h->next;
	}

	return (node_count);
}

