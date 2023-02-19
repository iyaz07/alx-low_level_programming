#include<stdio.h>
#include<stdlib.h>

/**
 * main - A program to print all possible combination  of 2 different digits
 * Return: Returns 0 always
 */
int main(void)
{
	int num1, num2;

	for (num1 = '0'; num1 < '9'; num1++)
	{
		for (num2 = num1 + 1; num2 <= '9'; num2++)
	{
		if (num2 != num1)
		{
		putchar(num1);
		putchar(num2);
		if (num1 == '8' && num2 == '9')
			break;
		putchar(',');
		putchar(' ');
		}
	}
	}
		putchar('\n');
		return (0);
}
