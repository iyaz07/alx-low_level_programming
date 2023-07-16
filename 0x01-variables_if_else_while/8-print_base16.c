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
	int s = 'a';

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}
	for (s = 'a'; s <= 'f'; s++)
	{
		putchar(s);
	}
	putchar('\n');
	return (0);
}
