#include <stdio.h>
#include <stdlib.h>

/**
 * main - print aphabet a-z in lower case
 *
 * Return:  0 (If successful)
 */
int main(void)
{
	char c;
	char C;

	for (c = 'a'; c <= 'z'; c++)
	putchar(c);
	for (C = 'A'; C <= 'Z'; C++)
	putchar(C);
	putchar('\n');
	return (0);
}
