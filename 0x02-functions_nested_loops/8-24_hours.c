#include "main.h"

/**
 * jack_bauer - check the code
 *
 * Return: Void
 */
void  jack_bauer(void)
{
	int i, l;

	for (i = 0; i <= 2; i++)
	{
	for (l = 0; l <= 9; l++)
	{
		if
			((i <= 1 && l <= 9) || (i <= 2 && l <= 3))
			{
				int j, k;

				for (j = 0; j <= 5; j++)
				{
				for (k = 0; k <= 9; k++)
				{
				_putchar(i + '0');
				_putchar(l + '0');
				_putchar(':');
				_putchar(j + '0');
				_putchar(k + '0');
				_putchar('\n');
				}
				}
			}
	}
	}
}
