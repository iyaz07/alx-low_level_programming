#include "lists.h"
/**
 * dlistint_len - A function that returns the number of nodes in list
 *
 * @h: The head
 * Return: Retyrns number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int number;

	for (number = 0; h != NULL; number++)
	{
		h = h->next;
	}
	return (number);
}
