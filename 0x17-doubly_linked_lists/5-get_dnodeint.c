#include "lists.h"

/**
 * get_dnodeint_at_index - Gets the node at index
 *
 * @head: pointer to the first element
 * @index: The position to return
 * Return: Returns node at index, else, NULL
 */


dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int x = 0;

	if (head == NULL)
		return (NULL);

	for (x = 0; x < index; x++)
	{
		if (head == NULL)
		return (NULL);

		head = head->next;
	}
	return (head);
}
