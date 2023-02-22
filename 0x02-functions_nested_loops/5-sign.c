#include "main.h"

/**
*print_sign - Checks and prints
*@n: the variable
*Return: returns 1 if > 0. 0 if = 0. -1 if = 1;
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
