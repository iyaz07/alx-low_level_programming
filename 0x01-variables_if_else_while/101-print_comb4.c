#include <stdio.h>

/**
  * main - Entry point
  *
  * main prints hex
  *
  * Return: Always 0 (success)
  */
int main(void)
{
	int i = 0;
	int j = 1;
	int k = 2;

	for (i = 0; i < 8; i++)
	{
		for (j = i + 1; j < 9; j++)
		{
			for (k = j + 1; k <= 9; k++)
			{
				if ((k != j) && j != i)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');

					if ((i == 7) && j == 8)
					continue;
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
