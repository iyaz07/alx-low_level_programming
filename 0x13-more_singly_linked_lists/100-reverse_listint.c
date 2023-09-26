#include "lists.h"
/**
 * reverse_listint - reverses the nodes of a listint_t
 * linked list, and returns the head nodes data (n)
 *
 * @head: pointer to the first node of the list
 *
 * Return: returns pointer to the first node.
 *
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;  /*Previous node*/
	listint_t *current = *head;  /*Current node*/
	listint_t *next_node;

	while (current != NULL)
	{
		next_node = current->next;  /*Save the next node*/
		current->next = prev;  /*Reverse the link*/

	/*Move pointers one step ahead*/
		prev = current;
		current = next_node;
	}

/*update the head to point to the new start of the list (previously the end)*/
	*head = prev;

	return (*head);  /*Return the new head of the reversed list*/
}

