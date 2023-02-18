#include <stdio.h>
#include <stdlib.h>

/**
 * main - print aphabet a-z in lower case
 *
 * Return:  returns 0 (If successful)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	putchar(c);
	putchar('\n');
	return (0);
}
