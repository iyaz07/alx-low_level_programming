#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * exponential_search - Searches for a value in a sorted array using
 * the Exponential search algorithm
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in the array
 * @value: The value to search for
 *
 * Return: The index of the value in the array, or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;
	size_t low, high;

	if (array == NULL || size == 0)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	low = bound / 2;
	high = (bound < size - 1) ? bound : size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", low, high);
	printf("Searching in array: ");
	print_arrayy(array, low, high);

	return (binary_searchh(array, low, high, value));
}

/**
 * binary_searchh - Searches for a value in a sorted array using
 * the binary search algorithm
 * @array: A pointer to the first element of the array to search in
 * @low: The starting index of the search range
 * @high: The ending index of the search range
 * @value: The value to search for
 *
 * Return: The index of the value in the array, or -1 if not found
 */
int binary_searchh(int *array, size_t low, size_t high, int value)
{
	while (low <= high)
	{
		size_t mid = (low + high) / 2;

		printf("Searching in array: ");
		print_arrayy(array, low, high);

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}

	return (-1);
}

/**
 * print_arrayy - Prints the elements of an array between two indices
 * @array: A pointer to the first element of the array
 * @start: The starting index
 * @stop: The ending index
 */
void print_arrayy(int *array, size_t start, size_t stop)
{
	printf("%d", array[start++]);
	while (start <= stop)
		printf(", %d", array[start++]);
	printf("\n");
}

