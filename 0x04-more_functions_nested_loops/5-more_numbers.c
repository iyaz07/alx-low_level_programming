#include "main.h"

/**
*more_numbers - to print multiple numbers
*
*Return: Return is void
*/
void more_numbers(void)
{
	int o , i;
	int div , rem;
	
	for (o = 0; o < 10; o++)
	{
	for (i = 0; i <= 14; i++)
	{
		div = i / 10;
		rem = i % 10;
		
		
		if (i > 9)
		{
		_putchar (div + '0');
		}
		_putchar (rem + '0');
	}
	_putchar ('\n');
	}
}
