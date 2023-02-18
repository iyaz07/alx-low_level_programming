#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program to print the list of hex number
 * Return: Return 0 if successful
 */
int main(void)
{
	int n;
	char alph;

	for (n = '0'; n <= '9'; n++)
		putchar(n);
	for (alph = 'a'; alph <= 'f'; alph++)
		putchar(alph);
	putchar('\n');

	return (0);
}
