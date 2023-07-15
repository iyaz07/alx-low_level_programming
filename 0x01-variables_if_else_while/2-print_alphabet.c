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
	int alpha = 'a';

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	putchar(alpha);
	putchar('\n');
	return (0);
}

