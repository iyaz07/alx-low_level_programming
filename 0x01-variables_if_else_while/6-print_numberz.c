#include <stdio.h>
#include <stdlib.h>

/**
 * main - print all numbers between 0 and 10
 * Return:  0 (If successful)
 */
int main(void)
{
	int Num;

	for (Num = '0'; Num <= '9'; Num++)
	putchar(Num);
	putchar('\n');

	return (0);
}
