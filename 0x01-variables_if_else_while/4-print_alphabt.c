#include <stdio.h>

/**
  * main - Entry point
  *
  * main prints lower case alphabets a-z
  *
  * Return: Always 0 (success)
  */
int main(void)
{
	char lower = 'a';

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		if (lower != 'q' && lower != 'e')
		{
			putchar(lower);
		}
	}
	putchar('\n');
	return (0);
}
