#include "main.h"
 #include <stdio.h>
/**
 * swap_int - swaps two different pointer parameters
 * @a: first param
 * @b: second param
 * Return: return is void
 */
void print_rev(char *s)
{
	int i = 0;

	while(s[i] != '\0')
	{
		i++;
	}

	for (; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
