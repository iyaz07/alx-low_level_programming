#include <stdio.h>

/**
  * main - Entry point
  *
  * main prints decimals between 0-9
  *
  * Return: Always 0 (success)
  */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
	putchar(i);
	}
	putchar('\n');
	return (0);
}
