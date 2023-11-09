#include "lists.h"
/**
 * add_dnodeint -  adds a new node at the beginning of a list
 * @head: pointer to the beginning of node.
 * @n: the node data
 *
 * Return: Returns the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;

	if (*head != NULL)
	{
		newNode->next = *head;
		(*head)->prev = newNode;
	}

	*head = newNode;

	return (*head);
}
