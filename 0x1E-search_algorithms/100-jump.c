#include "search_algos.h"

/**
 * jump_search - Function that searches for a value in a sorted
 * array of integers using Jump search algo
 * @array: pointer to the array to search through
 * @size: length of the array
 * @value: Target key
 *
 * Return: index of the target key, else, -1
 */
int jump_search(int *array, size_t size, int value)
{
	int jump, i, prev;
	
	if (array == NULL || size == 0)
		return (-1);

	jump = sqrt(size);
	prev = 0;

	printf("Value checked array[%d] = [%d]\n", prev, array[prev]);

	while (array[jump] < value && jump < (int)size)
	{
		prev = jump;
		jump += sqrt(size);
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
	}

	printf("Value found between indexes [%d] and [%d]\n", prev, jump);

	for (i = prev; i <= jump && i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		return (i);
	}
	return (-1);
}
