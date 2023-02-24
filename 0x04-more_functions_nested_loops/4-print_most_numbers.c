#include "main.h"
#include <stdio.h>
/**
* print_most_numbers - main function for couunting randoms
* Return: 0 if successful
*/
void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if (n == 2 || n == 4)
		{
		continue;
		}
		else
			_putchar(n + '0');
	}
	_putchar('\n');
}
