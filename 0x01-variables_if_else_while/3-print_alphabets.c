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
	int lower = 'a';
	int upper = 'A';

	for (lower = 'a'; lower <= 'z'; lower++)
	putchar(lower);
	for (upper = 'A'; upper <= 'Z'; upper++)
	putchar(upper);
	putchar('\n');
	return (0);
}
