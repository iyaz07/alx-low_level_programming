#include "main.h"
#include <stdio.h>
/**
 * times_table - a function to print multiplication table 9-10
 *
 * Return: retur is void
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
	for (j = 0; j <= 9; j++)
	{
		int mul = i * j;
		int dev = mul / 10;
		int mod = mul % 10;

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
		_putchar('\n');
	}
}
