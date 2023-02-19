#include <stdio.h>
#include <stdlib.h>

/**
 * main - to print all possible combinations of single numbers
 *
 * Return: Always 0 if successful
 */
int main(void)
{
	int d;

	for (d = '0'; d <= 9; d++)
	{
		putchar(d);
	if (d != 9)
	{
		putchar(',');
		putchar(' ');
	}
	}
		putchar('\n');
		return (0);
}
