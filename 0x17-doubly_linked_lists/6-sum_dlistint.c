#include "lists.h"

/**
 * sum_dlistint - calculates the sum of a linked list
 *
 * @head: pointer to the first node
 * Return: The sum of the data in node
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
