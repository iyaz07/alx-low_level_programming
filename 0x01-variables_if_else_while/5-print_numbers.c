#include <stdio.h>
#include <stdlib.h>

/**
 *main - main function to print all numbers within base 10
 *Return: always 0 (If successful)
 */
int main(void)
{
	int Base_10;

	for (Base_10 = 0; Base_10 < 10; Base_10++)
	{
		printf("%d", Base_10);
		printf("\n");
	}
	return (0);
}
