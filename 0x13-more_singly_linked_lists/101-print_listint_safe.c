#include <stdio.h>
#include <stdlib.h>
#include "your_header_file.h"  // Replace with the actual header file

/**
 * print_listint_safe - Prints a listint_t linked list safely, handling loops
 * @head: Pointer to the head of the linked list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head;
	size_t node_count = 0;

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		node_count++;

        /*Move to the next node*/
		current = current->next;

	/*Check for a loop by comparing the address with previously visited nodes*/
		const listint_t *check_loop = head;
	
		for (size_t i = 0; i < node_count; i++)
		{
			if (check_loop == current)
			{
				fprintf(stderr, "Loop detected, exiting with status 98\n");
				exit(98);
			}
			check_loop = check_loop->next;
		}
	}
	return (node_count);
}

