#include "lists.h"
/**
 * reverse_listint - reverses the nodes of a listint_t
 * linked list, and returns the head node.
 *
 * @head: pointer to the first node of the list
 *
 * Return: returns pointer to the first node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;

	if (head == NULL || *head == NULL)
		return (NULL);

	while (current->next != NULL)
	{
		listint_t *next_node = current->next; /*Store the next node*/

		current->next = prev; /*Reverse the link*/

		prev = current;
		current = next_node;
	}

	current->next = prev;  /*Reverse the last node*/

	*head = current; /*Update the head to point to the new first node*/

	return (current); /*last node of the original list)*/
}

