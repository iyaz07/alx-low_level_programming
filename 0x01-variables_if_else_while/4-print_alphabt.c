#include<stdio.h>
#include<stdlib.h>
/**
 * main - a program to print all alphabets except q and e
 * Return: return 0 if (successful)
 */
int main(void)
{
	char c;
	char e = 'e';
	char q = 'q';

	for (c = 'a'; c <= 'z'; c++)
	{
	if (c != e && c != q)
	putchar(c);
	}
	putchar('\n');
	return (0);
}
