#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 *
 * @head: pointer to the head of the list
 * @idx: index of the list where the new node should be added
 * @n: element to be added
 *
 * Return: returns address of new node, or NULL if failure
 *
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *current;
	unsigned int i = 0;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	current = *head;

	for (i = 0; i < idx - 1; i++)
	{
		if (current == NULL)
		{
			free(new_node);
			return (NULL);  /*Index out of range*/
		}
		current = current->next;
	}

	/*Case 2: Insert at a valid position*/
	if (current != NULL)
	{
		new_node->next = current->next;
		current->next = new_node;
		return (new_node);
	}

	/*Case 3: Index out of range*/
	free(new_node);
	return (NULL);
}
