#include "lists.h"

/**
 * sum_listint - returns the sum of all the data
 * in listint_t
 *
 * @head: head of the list
 *
 * Return: sum (sum of all the data (n) in the list)
 *
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
