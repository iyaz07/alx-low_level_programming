#include "main.h"
#include <stdio.h>
/**
 * times_table - a function to print multiplication table 9-10
 *
 * Return: retur is void
 */
void times_table(void)
{
	int i, j, mul, dev, mod;

	if (i < 9 && j <= 9)
	{
	for (i = 0; i <= 9; i++)
	{
	for (j = 0; j <= 9; j++)
	{
		mul = i * j;
		dev = mul / 10;
		mod = mul % 10;

		if (mul <= 9)
		{
			_putchar(mul + '0');
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
		else
		{
			_putchar(dev + '0');
			_putchar(mod + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	}
	}
	else
		_putchar(mul + '0');
	_putchar('\n');
}
