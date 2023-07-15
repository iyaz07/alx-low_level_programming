#include <stdio.h>

/**
  * main - Entry point
  *
  * main prints lower case alphabets a-z in reverse
  *
  * Return: Always 0 (success)
  */
int main(void)
{
	int lower = 'z';

	for (lower = 'z'; lower >= 'a'; lower--)
	{
		putchar(lower);
	}
	putchar('\n');
	return (0);
}
