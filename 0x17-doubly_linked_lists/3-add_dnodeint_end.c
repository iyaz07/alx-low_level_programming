#include "lists.h"
/**
 *  add_dnodeint_end - Adds a new node at the end of a linked list
 *
 *  @head: pointer to first node
 *  @n: The new node data to be added
 *  Return: The address of new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *temp;

	newNode = malloc(sizeof(dlistint_t));

	if (newNode ==  NULL)

		return (NULL);


	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;

	if (*head == NULL)
		*head = newNode;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newNode;
		newNode->prev = temp;
	}
	return (newNode);
}
