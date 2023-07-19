#include "main.h"

/**
 * times_table - Check Description
 * Description: Prints times table 9 starting from 0
 * Return: Nothing.
 */
void times_table(void)
{
	int i, j = 0;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int k = i * j;

			if ((k / 10) == 0)
			{
				if (j != 0)
					 _putchar(' ');
				_putchar(k + '0');

				if (j == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			
				if (j == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
