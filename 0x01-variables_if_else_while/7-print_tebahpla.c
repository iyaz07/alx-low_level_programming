#include<stdio.h>
#include<stdlib.h>

/**
 * main - A programme to print in reverse
 * Return: retuns 0 if successful
 */
int main(void)
{
	char revC;

	for (revC = 'z'; revC >= 'a'; revC-- )
		putchar(revC);
	putchar('\n');
	return (0);
}
