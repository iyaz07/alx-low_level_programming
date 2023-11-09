#include "lists.h"

/**
 * print_dlistint - prints all the elements of a double listint_t list
 * @h:A pointer to the first element of the list
 * Return: The number of elements in the linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	unsigned int count = 0;

	for (count = 0; h != NULL; count++)
	{
		printf("%i\n", h->n);
		h = h->next;
	}
	return (count);
}
