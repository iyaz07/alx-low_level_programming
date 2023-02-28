#include "main.h"
#include <stdio.h>
/**
 * swap_int - swaps two different pointer parameters
 * @a: first param
 * @b: second param
 * Return: return is void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
