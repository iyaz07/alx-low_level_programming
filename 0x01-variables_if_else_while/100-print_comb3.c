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

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			if (j != i)
			{
				putchar(i + '0');
				putchar(j + '0');

				if ((i == 8) && j == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
