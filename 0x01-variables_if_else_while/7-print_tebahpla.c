#include<stdio.h>
#include<stdlib.h>

/**
 * main - a programe to write A-z in reverse
 * Return: Return 0 If successful
 */
int main(void)
{
	char rev;

	for (rev = 'z'; rev >= 'a'; rev--)
		putchar(rev);
	putchar('\n');

	return (0);

}
