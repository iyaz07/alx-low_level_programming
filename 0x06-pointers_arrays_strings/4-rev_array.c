#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverses elements of an array
 * @a: first param
 * @n: number of elements
 * Return: return is void
 */
void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	for (i = n - 1; i >= n / 2; n--)
	{
	tmp = a[n - 1 - i];
	a[n - 1 - i] = a[i];
	a[i] = tmp;
	}
}
