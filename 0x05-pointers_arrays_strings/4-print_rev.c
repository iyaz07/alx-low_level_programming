#include "main.h"
 #include <stdio.h>
/**
 * print_rev - prints in revers
 * @s: arg
 * Return: return is void
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	for (; i >= 0; i--)
	{
		fprintf(stderr, "%c", s[i]);
	}
	_putchar('\n');
}
