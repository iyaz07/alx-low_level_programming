#include "lists.h"
size_t dlistint_len(const dlistint_t *h)
{
	int number;

	for (number = 0; h != NULL; number++)
	{
		h = h->next;
	}
	return (number);
}
