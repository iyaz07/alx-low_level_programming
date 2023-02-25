#include<stdio.h>
#include<stdlib.h>

/**
 * main - a program to print combination of two different two digits
 *
 * Return: return 0 if successful
 */
int main()
{
	int m1, m2;

	for (m1 = 0; m1 < 99; m1++)
	{
	for (m2 = m1 + 1; m2 <= 99; m2++)
	{
			putchar((m1 / 10) + '0');
			putchar((m1 % 10) + '0');
			putchar(' ');
			putchar((m2 / 10) + '0');
			putchar((m2 % 10) + '0');	
			if (m1 == 98 && m2 == 99)
			continue;
			putchar(',');
			putchar(' ');
	}
	}
		putchar('\n');
		return (0);
}
