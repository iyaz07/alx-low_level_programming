#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  * print_alphabet - Entry point
  *
  * Return: 0 always (success)
  */
void print_alphabet(void)
{
	int c = 'a';

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
