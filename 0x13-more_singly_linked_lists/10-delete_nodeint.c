#include "lists.h"

/**
 *  delete_nodeint_at_index -  deletes the node at index
 *  index of a listint_t linked list
 *
 *  @head: head of the list
 *  @index: index of the node to be deleted
 *
 *  Return: 1 on success, -1 if failed
 *
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *node_to_delete;
	listint_t *temp;

	if (*head == NULL)
	return (-1);  /*Empty list, deletion failed*/

	temp = *head;

	/*Case 1: Delete the head node*/
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);  /*Deletion succeeded*/
	}

    /*Traverse to the node before the desired position*/
	for (i = 0; i < index - 1; i++)
	{
		if (temp == NULL || temp->next == NULL)
		return (-1);  /*Index out of range, deletion failed*/
		temp = temp->next;
	}

	node_to_delete = temp->next;

    /*Case 2: Delete at a valid position*/
	if (node_to_delete != NULL)
	{
		temp->next = node_to_delete->next;
		free(node_to_delete);
		return (1);  /*Deletion succeeded*/
	}

	return (-1);  /*Index out of range, deletion failed*/
}
