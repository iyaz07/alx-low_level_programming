#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t
 * linked list, and returns the head nodes data (n)
 *
 * @head: pointer to the head of the list
 *
 * Return: returns data
 *
 */
int pop_listint(listint_t **head)
{
	int data = 0;

	if (head == NULL || *head == NULL)
		return (0);

	listint_t *temp = *head;

	data = temp->n;
	*head = (*head)->next;
	free(temp);
	return (data);
}

