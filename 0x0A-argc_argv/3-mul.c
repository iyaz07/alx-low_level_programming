#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that multiplies two numbers
 * @argc: The arguments' counter
 * @argv: The arguments' values
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int arg1, arg2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		arg1 = atoi(argv[1]);
		arg2 = atoi(argv[2]);
		result = arg1 * arg2;
		printf("%d\n", result);
		return (0);
	}
}
