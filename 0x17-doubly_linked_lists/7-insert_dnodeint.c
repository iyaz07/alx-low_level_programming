#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts the node at given idx
 *
 * @idx: The index
 * @h: pointer to the first node
 * @n: The node data
 * Return: The location of the new index, else NULL 
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *temp;
	unsigned int i;

	if (*h == NULL && idx != 0)
		return (NULL);

	newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;

	if (idx == 0)
	{
		if (*h != NULL)
		{
			newNode->next = *h;
			(*h)->prev = newNode;
		}
		*h = newNode;
		
		return (newNode);
	}

	temp = *h;

	for (i = 0; i < idx - 1; i++)
	{
		if (temp == NULL)
		{
			free(newNode);
			return (NULL);
		}
		temp = temp->next;
	}
	
	if (temp->next != NULL)
		(temp->next)->prev = newNode;

	newNode->next = temp->next;
	newNode->prev = temp;
	temp->next = newNode;

	return (newNode);
}
