#include "search_algos.h"
/**
 * print_array - prints a given array
 * @start: printing starting point
 * @stop: stopping point for printing
 *
 * Return: nothing
 */
void print_array(int *array, int start, int stop)
{
	int i;

	if (array)
	{
		for (i = start; i < stop; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
	}
	return;
}
