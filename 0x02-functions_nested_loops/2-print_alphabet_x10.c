#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  * print_alphabet_x10 - Function to print a-z x10
  *
  * Return: 0 always (success)
  */
void print_alphabet_x10(void)
{
	int c = 'a';
	int i = 1;

	for (i = 1; i <= 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
